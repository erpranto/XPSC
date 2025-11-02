//https://cses.fi/problemset/task/1641/

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

int main()
{
    FAST;
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> v;
    for (int i = 1; i <= n; i++)
    {
        int z;
        cin >> z;
        v.push_back({z, i});
    }
    sort(v.begin(), v.end());
    for (int k = 0; k < n; k++)
    {
        for (int i = k+1, j = n - 1; i < j;)
        {
            if (v[k].first + v[i].first + v[j].first > x)
                j--;
            else if (v[k].first + v[i].first + v[j].first < x)
                i++;
            else
            {
                cout << v[k].second << " " << v[i].second << " " << v[j].second << nl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}