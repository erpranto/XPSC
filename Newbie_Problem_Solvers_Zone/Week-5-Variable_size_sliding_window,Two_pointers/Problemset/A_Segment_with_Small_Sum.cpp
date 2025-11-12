// /https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A

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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll l = 0, r = 0, ans = 0, sum = 0;
    while (r < n)
    {
        sum += a[r];
        if (sum <= k)
        {

            ans = max(ans, r - l + 1);
        }
        else
        {
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout << ans << nl;
    return 0;
}