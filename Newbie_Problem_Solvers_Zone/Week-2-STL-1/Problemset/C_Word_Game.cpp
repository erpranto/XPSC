// https://codeforces.com/problemset/problem/1722/C

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
        map<string, vector<int>> mp;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }
        vector<int> ans(4, 0);
        for (auto [key, vec] : mp)
        {
            if (vec.size() == 1)
            {
                ans[vec[0]] += 3;
            }
            if (vec.size() == 2)
            {
                ans[vec[0]] += 1;
                ans[vec[1]] += 1;
            }
        }
        cout << ans[1] << " " << ans[2] << " " << ans[3] << nl;
    }
    return 0;
}