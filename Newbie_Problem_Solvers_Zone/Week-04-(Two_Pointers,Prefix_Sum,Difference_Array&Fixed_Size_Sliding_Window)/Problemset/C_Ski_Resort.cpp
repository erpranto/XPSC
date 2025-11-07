//https://codeforces.com/problemset/problem/1840/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
#define input(n) \
    int n;       \
    cin >> n;
#define HA cout << "YES" << '\n';
#define NA cout << "NO" << '\n';
#define nl '\n'
#define mod 1000000007
#define N 500005
ll fx[] = {0, 0, 1, -1, 1, 1, -1, -1};
ll fy[] = {1, -1, 0, 0, -1, 1, -1, 1};

int main()
{
    FAST int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> days;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val <= q)
            {
                total++;
            }
            else
            {
                if (total > 0)
                {
                    days.push_back(total);
                    total = 0;
                }
            }
        }
        if (total > 0)
            days.push_back(total);
        ll ans = 0;
        for (auto val : days)
        {
            if (val >= k)
            {
                ans += (1LL * (val - k + 1) * (val - k + 2)) / 2;
            }
        }
        cout << ans << nl;
    }
    return 0;
}