// https://codeforces.com/problemset/problem/1807/D

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
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n + 1), pref_sum(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i];
            pref_sum[i] = pref_sum[i - 1] + v[i];
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll total = pref_sum[n];
            ll segment_sum = pref_sum[r] - pref_sum[l - 1];
            ll new_sum = total - segment_sum + (r - l + 1) * k;
            if (new_sum % 2 != 0)
                HA else NA
        }
    }
    return 0;
}