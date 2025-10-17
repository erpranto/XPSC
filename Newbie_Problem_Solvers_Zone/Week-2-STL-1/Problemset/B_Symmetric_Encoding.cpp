// https://codeforces.com/problemset/problem/1974/B

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
        string s;
        cin >> s;
        set<char> st(s.begin(), s.end());
        string r(st.begin(), st.end());
        int m = r.size();
        map<char, char> mp;
        for (int i = 0; i < m; i++)
            mp[r[i]] = r[m - i - 1];

        string ans = "";
        for (auto c : s)
        {
            ans += mp[c];
        }
        cout << ans << nl;
    }
    return 0;
}