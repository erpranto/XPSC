//https://codeforces.com/problemset/problem/1006/C

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
    FAST;
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll suml = 0, sumr = 0, ans = 0;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (suml <= sumr)
            suml += a[l++];
        else
            sumr += a[r--];
        if (suml == sumr)
        {
            ans = suml;
        }
    }
    cout << ans << nl;
    return 0;
}