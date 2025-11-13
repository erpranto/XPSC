//https://cses.fi/problemset/task/1077/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
#define HA cout << "YES" << '\n';
#define NA cout << "NO" << '\n';
#define nl '\n'
#define mod 1000000007
#define N 500005
ll fx[] = {0, 0, 1, -1, 1, 1, -1, -1};
ll fy[] = {1, -1, 0, 0, -1, 1, -1, 1};

ll get_cost(ll l_sum, ll r_sum, multiset<ll> &left, multiset<ll> &right)
{
    ll median = *prev(left.end());
    ll cost = median * (ll)left.size() - l_sum;
    cost += r_sum - median * (ll)right.size();
    return cost;
}

int main()
{
    FAST;
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll left_sum = 0, right_sum = 0;
    multiset<ll> left, right;
    for (ll i = 0; i < k; i++)
    {
        left.insert(arr[i]);
        left_sum += arr[i];
    }
    while (left.size() > (k + 1) / 2)
    {
        auto it = prev(left.end());
        left_sum -= *it;
        right_sum += *it;
        right.insert(*it);
        left.erase(it);
    }

    cout << get_cost(left_sum, right_sum, left, right) << " ";
    ll l = 1, r = k;
    while (r < n)
    {
        ll out_val = arr[l - 1];
        ll in_val = arr[r];
        if (left.find(out_val) != left.end())
        {
            left.erase(left.find(out_val));
            left_sum -= out_val;
        }
        else
        {
            right.erase(right.find(out_val));
            right_sum -= out_val;
        }
        if (!left.empty() && in_val <= *prev(left.end()))
        {
            left.insert(in_val);
            left_sum += in_val;
        }
        else
        {
            right.insert(in_val);
            right_sum += in_val;
        }
        while (left.size() > (k + 1) / 2)
        {
            auto it = prev(left.end());
            left_sum -= *it;
            right_sum += *it;
            right.insert(*it);
            left.erase(it);
        }
        while (left.size() < (k + 1) / 2)
        {
            auto it = right.begin();
            right_sum -= *it;
            left_sum += *it;
            left.insert(*it);
            right.erase(it);
        }
        cout << get_cost(left_sum, right_sum, left, right) << " ";
        l++, r++;
    }
    return 0;
}