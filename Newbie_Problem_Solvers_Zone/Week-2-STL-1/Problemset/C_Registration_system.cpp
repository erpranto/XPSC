//https://codeforces.com/problemset/problem/4/C

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
    map<string, int> mp;
    while (tc--)
    {
        string s;
        cin >> s;
        if (mp.find(s) == mp.end())
        {
            mp[s] = 0;
            cout << "OK\n";
        }
        else
        {
            mp[s]++;
            string st = s + to_string(mp[s]);
            cout << st << nl;
            mp[st] = 0;
        }
    }
    return 0;
}