//https://atcoder.jp/contests/abc408/tasks/abc408_c

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
    int n, m;
    cin >> n >> m;
    vector<int> diff(n + 2, 0);
    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        diff[l]++, diff[r + 1]--;
    }
    int ans = INT_MAX;
    int cover = 0;
    bool uncovered = false;
    for (int i = 1; i <= n; i++)
    {
        cover += diff[i];
        if (cover == 0)
            uncovered = true;
        ans = min(ans, cover);
    }

    if (uncovered)
        cout << 0 << nl;
    else
        cout << ans << nl;
    return 0;
}