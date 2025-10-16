//https://codeforces.com/problemset/problem/44/A

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
    map<pair<string, string>, bool> mp;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        mp[{a, b}] == true;
    }
    cout << mp.size();
    return 0;
}