//https://www.codechef.com/problems/LCM_GCD


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

int LCM(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}
int GCD(int a, int b)
{
    return __gcd(a, b);
}

int main()
{
    FAST;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        ll a, b;
        cin >> a >> b;

        cout << a - GCD(a, b) << nl;
    }
    return 0;
}