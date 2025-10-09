//https://open.kattis.com/problems/lastfactorialdigit

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int f = 1;
        for (int i = 1; i <= n; i++)
        {
            f *= i;
        }
        cout << f % 10 << nl;
    }
    return 0;
}