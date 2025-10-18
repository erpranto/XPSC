//https://www.spoj.com/problems/ACMCEG2B/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<pair<int, int>, string> mp;
    while (n--)
    {
        int a, b;
        string s;
        cin >> a >> b >> s;
        mp[{a, b}] = s;
    }
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        cout << mp[{a, b}] << nl;
    }
    return 0;
}