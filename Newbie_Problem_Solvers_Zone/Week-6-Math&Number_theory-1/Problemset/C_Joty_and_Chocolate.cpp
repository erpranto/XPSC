// /https://codeforces.com/problemset/problem/678/C

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

ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}
ll GCD(ll a, ll b)
{
    return __gcd(a, b);
}

int main()
{
    FAST;
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll cnt1 = (n / a) * p, cnt2 = (n / b) * q, overlap = (n / LCM(a, b));
    ll ans = (cnt1 + cnt2) - (overlap * (p + q)) + (overlap * max(p, q));
    cout << ans << nl;
    return 0;
}