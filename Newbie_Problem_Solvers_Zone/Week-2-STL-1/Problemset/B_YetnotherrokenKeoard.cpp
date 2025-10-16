//https://codeforces.com/problemset/problem/1907/B

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
        string s;
        cin >> s;
        vector<pair<int, char>> up, low;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b' || s[i] == 'B')
            {
                if (s[i] == 'b' && !low.empty())
                    low.pop_back();
                if (s[i] == 'B' && !up.empty())
                    up.pop_back();
            }
            else
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                    low.push_back({i, s[i]});
                if (s[i] >= 'A' && s[i] <= 'Z')
                    up.push_back({i, s[i]});
            }
        }
        vector<pair<int, char>> v;
        v.insert(v.end(), low.begin(), low.end());
        v.insert(v.end(), up.begin(), up.end());
        sort(v.begin(), v.end());
        for (auto p : v)
            cout << p.second;
        cout << nl;
    }
    return 0;
}