//https://codeforces.com/problemset/problem/1669/E

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
#define HA cout << "YES" << '\n';
#define NA cout << "NO" << '\n';
#define nl '\n'
#define mod 1000000007
#define N 500005
ll fx[] = {0, 0, 1, -1, 1, 1, -1, -1};
ll fy[] = {1, -1, 0, 0, -1, 1, -1, 1};

int main()
{
    FAST;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        map<string, int> mp;
        ll ans = 0;
        for (auto s : v)
        {
            for (int i = 0; i < 2; i++)
            {
                for (char c = 'a'; c <= 'k'; c++)
                {
                    if (c == s[i])
                        continue;
                    string tmp = s;
                    tmp[i] = c;
                    ans += mp[tmp];
                }
            }
            mp[s]++;
        }
        cout << ans << nl;
    }
    return 0;
}