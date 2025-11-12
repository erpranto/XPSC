//https://codeforces.com/problemset/problem/1873/F

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
        int n, k;
        cin >> n >> k;
        vector<int> a(n), h(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> h[i];
        ll l = 0, r = 0, ans = 0, sum = 0;
        while (r < n)
        {
            sum += a[r];
            if (r + 1 < n && sum <= k && h[r] % h[r + 1] == 0)
                ans = max(ans, (r - l + 1));
            else
            {
                if (r + 1 < n && h[r] % h[r + 1] != 0)
                {
                    if (sum <= k)
                        ans = max(ans, (r - l + 1));
                    l = r + 1;
                    sum = 0;
                }
                else
                {
                    if (sum <= k)
                        ans = max(ans, (r - l + 1));
                    sum -= a[l];
                    l++;
                }
            }
            r++;
        }
        cout << ans << nl;
    }
    return 0;
}