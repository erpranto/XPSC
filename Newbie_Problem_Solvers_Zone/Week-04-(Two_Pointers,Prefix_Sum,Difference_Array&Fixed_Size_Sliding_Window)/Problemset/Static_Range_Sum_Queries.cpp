//https://cses.fi/problemset/task/1646/

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
    vector<ll> a(n + 2), pref_sum(n + 2);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pref_sum[i] = pref_sum[i - 1] + a[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pref_sum[r] - pref_sum[l - 1] << nl;
    }
    return 0;
}