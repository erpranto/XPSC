//https://codeforces.com/problemset/problem/637/B

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
    map<string, int> mp;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        mp[s] = i;
    }
    vector<pair<int, string>> v;
    for (auto str : mp)
    {
        v.push_back({str.second, str.first});
    }
    sort(v.rbegin(), v.rend());
    for (auto it : v)
        cout << it.second << nl;

    return 0;
}