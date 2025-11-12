//https://codeforces.com/problemset/problem/1692/E

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll l = 0, r = 0, sum = 0, len = 0;
        while (r < n)
        {
            sum += a[r];
            while (sum > k && l <= r)
            {
                sum -= a[l];
                l++;
            }

            if (sum == k)
            {
                len = max(len, (ll)(r - l + 1));
            }

            r++;
        }
        if (len == 0)
            cout << -1 << nl;
        else
            cout << n - len << nl;
    }
    return 0;
}