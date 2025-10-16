//https://codeforces.com/problemset/problem/855/A

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
    map<string, bool> mp;
    while (tc--)
    {
        string s;
        cin >> s;
        if (mp.find(s) == mp.end())
        {
            cout << "NO\n";
            mp[s] = true;
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}