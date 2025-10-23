//https://codeforces.com/problemset/problem/2117/C

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<int> s1;
        set<int> temp;
        int ans = 1;
        s1.insert(v[0]);
        for (int i = 1; i < n; i++)
        {
            auto it = s1.find(v[i]);
            if (it != s1.end())
            {
                s1.erase(it);
                temp.insert(v[i]);
            }
            else
            {
                temp.insert(v[i]);
            }
            if (s1.empty())
            {
                ans++;
                s1 = temp;
                temp.clear();
            }
        }
        cout << ans << nl;
    }
    return 0;
}