#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define nl '\n'

ll __lcm(ll a, ll b)
{
    return ((a * b) / __gcd(a, b));
}
int main()
{
    FAST;
    ll a, b;
    cin >> a >> b;
    cout << "GCD-> " << __gcd(a, b) << nl;
    cout << "LCM-> " << __lcm(a, b) << nl;
    return 0;
}