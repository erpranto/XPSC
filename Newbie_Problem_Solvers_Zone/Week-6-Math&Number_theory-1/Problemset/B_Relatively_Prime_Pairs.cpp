//https://codeforces.com/problemset/problem/1051/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
#define HA cout << "YES" << '\n';
#define NA cout << "NO" << '\n';
#define nl '\n'
int main()
{
    FAST;
    ll l, r;
    cin >> l >> r;
    HA
    for (ll i = l; i <= r; i += 2)
    {
        cout << i << " " << i + 1 << nl;
    }
    return 0;
}