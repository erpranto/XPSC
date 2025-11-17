#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define nl '\n'

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
    int a, b;
    cin >> a >> b;
    cout << "GCD-> " << GCD(a, b) << nl;
    cout << "LCM-> " << LCM(a, b) << nl;
    return 0;
}