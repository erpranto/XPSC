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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> d(n + 1);
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        d[l]++, d[r+1]--;
    }
    for (int i = 1; i <= n; i++)
    {
        d[i] = d[i - 1] + d[i];
    }
    sort(a.rbegin(), a.rend());
    sort(d.rbegin(), d.rend());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (1LL * a[i] * d[i]);
    }
    cout << ans << nl;
    return 0;
}