//https://codeforces.com/problemset/problem/977/B

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
    string s;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        string s2 = s.substr(i, 2);
        mp[s2]++;
    }
    string ans;
    int mx = 0;
    for (auto st : mp)
    {
        if (mx < st.second)
        {
            ans = st.first;
            mx = st.second;
        }
    }
    cout << ans << nl;
    return 0;
}