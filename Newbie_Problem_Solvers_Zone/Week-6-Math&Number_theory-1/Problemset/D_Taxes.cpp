//https://codeforces.com/problemset/problem/735/D


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
#define HA cout << "YES" << '\n';
#define NA cout << "NO" << '\n';
#define nl '\n'

bool isprime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    FAST;
    int n;
    cin >> n;
    if (isprime(n))
        cout << 1 << nl;
    else if (n % 2 == 0)
        cout << 2 << nl;
    else
    {
        if (isprime(n - 2))
            cout << 2 << nl;
        else
            cout << 3 << nl;
    }
    return 0;
}