//https://codeforces.com/problemset/problem/1618/C

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
        int n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll G1 = 0, G2=0;
        for (int i = 0; i < n; i += 2)
        {
            G1 = __gcd(G1, a[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            G2 = __gcd(G2, a[i]);
        }
        ll ans = 0;
        bool ok = true;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % G1 == 0)
                ok = false;
        }
        if (ok)
            ans = G1;
        else
        {
            ok = true;
            for (int i = 0; i < n; i += 2)
            {
                if (a[i] % G2 == 0)
                    ok = false;
            }
            if (ok)
                ans = G2;
        }
        cout << ans << nl;
    }
    return 0;
}