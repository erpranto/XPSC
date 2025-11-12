//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D

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
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n), pre(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll l = 0, r = 0, ans = 0, sum = 0;

    while (l < n)
    {
        while (r < n && sum < s)
        {
            sum += v[r];
            r++;
        }
        if (sum >= s)
        {
            ans += (n - r + 1);
        }
        sum -= v[l];
        l++;
    }
    cout << ans << nl;
    return 0;
}