//https://codeforces.com/problemset/problem/1547/C

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
        int k, m, n;
        cin >> k >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        vector<int> ans;
        int lines = k;
        int i = 0, j = 0;
        bool ok = true;
        while (i < n || j < m)
        {
            bool moved = false;
            if (i < n && a[i] == 0)
            {
                ans.push_back(0);
                i++;
                lines++;
                moved = true;
            }
            else if (j < m && b[j] == 0)
            {
                ans.push_back(0);
                j++, lines++;
                moved = true;
            }
            else if (i < n && a[i] <= lines)
            {
                ans.push_back(a[i]);
                i++;
                moved = true;
            }
            else if (j < m && b[j] <= lines)
            {
                ans.push_back(b[j]);
                j++;
                moved = true;
            }
            if (!moved)
            {
                ok = false;
                break;
            }
        }
        if (!ok)
            cout << -1 << nl;
        else
        {
            for (auto it : ans)
            {
                cout << it << " ";
            }
            cout << nl;
        }
    }
    return 0;
}