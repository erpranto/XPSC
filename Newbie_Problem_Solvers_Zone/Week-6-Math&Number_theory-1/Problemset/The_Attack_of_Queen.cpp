//https://www.codechef.com/problems/QUEENATTACK


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
        int n, x, y;
        cin >> n >> x >> y;
        if (n == 1)
        {
            cout << 0 << nl;
            continue;
        }
        ll smve = 2 * (n - 1);
        ll tl = min(x - 1, y - 1);
        ll tr = min(x - 1, n - y);
        ll bl = min(n - x, y - 1);
        ll br = min(n - x, n - y);

        ll ans = smve + tl + tr + bl + br;
        cout << ans << nl;
    }
    return 0;
}