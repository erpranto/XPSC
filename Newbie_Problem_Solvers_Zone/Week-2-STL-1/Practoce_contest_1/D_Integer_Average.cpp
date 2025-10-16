//https://vjudge.net/contest/757589#problem/D

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
        vector<int> v(n);
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (even >= 2 || odd >= 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}