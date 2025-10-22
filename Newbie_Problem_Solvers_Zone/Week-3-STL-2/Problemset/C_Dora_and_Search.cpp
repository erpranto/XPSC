//https://codeforces.com/problemset/problem/1793/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define nl '\n'
int main()
{
    FAST;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        set<int> s;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
            v.push_back(x);
        }
        int l = 0, r = n - 1;
        bool flag = false;
        while (l < r)
        {
            auto mn = *s.begin(), mx = *--s.end();
            if (v[l] != mn && v[l] != mx && v[r] != mn && v[r] != mx)
            {
                cout << l + 1 << " " << r + 1 << "\n";
                flag = true;
                break;
            }
            if (v[l] == mn || v[l] == mx)
            {
                s.erase(v[l]);
                l++;
            }
            if (v[r] == mn || v[r] == mx)
            {
                s.erase(v[r]);
                r--;
            }
        }
        if (!flag)
            cout << -1 << nl;
    }
    return 0;
}