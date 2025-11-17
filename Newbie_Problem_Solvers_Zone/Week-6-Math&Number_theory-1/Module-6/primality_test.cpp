#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define nl '\n'
#define HA cout << "YES" << '\n';
#define NA cout << "NO" << '\n';

bool primality_test(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i < n; i++)
    {
        if (n % 1 == 0)
            return false;
    }
    return true;
}

int main()
{
    FAST;
    int n;
    cin >> n;
    bool prime = primality_test(n);
    if (prime)
        HA else NA 
    return 0;
}