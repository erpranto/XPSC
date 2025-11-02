//https://cses.fi/problemset/task/2428/

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
    int n, k;
    cin >> n >> k;
    vector<ll> a(n+1);
    map<ll, ll> mp;
    ll ans = 0;
    ll cnt = 0;
    for (int i = 1, j = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if (mp[a[i]] == 1)
            cnt++;
        while (cnt > k)
        {
            mp[a[j]]--;
            if (mp[a[j]] == 0)
                cnt--;
            j++;
        }
        ans += (i - j + 1);
    }
    cout << ans << nl;
    return 0;
}