//https://codeforces.com/problemset/problem/2074/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int l, r, d, u;
        cin >> l >> r >> d >> u;

        if (l == r && r == d && d == u)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}