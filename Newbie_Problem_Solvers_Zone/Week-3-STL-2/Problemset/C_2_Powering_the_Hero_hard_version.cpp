//https://codeforces.com/problemset/problem/1800/C2

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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        priority_queue<ll> bonus;
        ll ans = 0;
        for (auto x : v)
        {
            if (x > 0)
                bonus.push(x);
            else if (!bonus.empty())
            {
                ans += bonus.top();
                bonus.pop();
            }
        }
        cout << ans << nl;
    }
    return 0;
}