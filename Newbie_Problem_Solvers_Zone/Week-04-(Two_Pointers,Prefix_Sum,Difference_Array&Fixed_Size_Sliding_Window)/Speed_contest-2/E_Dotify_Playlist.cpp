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
        int n, k, l;
        cin >> n >> k >> l;
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int m, li;
            cin >> m >> li;
            mp[li].push_back(m);
        }
        if (mp[l].size() < k)
            cout << -1 << nl;
        else
        {
            auto v = mp[l];
            sort(v.rbegin(), v.rend());
            int sum = 0;
            for (int i = 0; i < k; i++)
                sum += v[i];
            cout << sum << nl;
        }
    }
    return 0;
}