// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define nl '\n'

int main()
{
    FAST;
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int l = 0, r = 0;
    ll ans = 0;
    while (l < n && r < m)
    {
        int cur = a[l], cnt1 = 0, cnt2 = 0;
        while (l < n && a[l] == cur)
            cnt1++, l++;

        while (r < m && cur > b[r])
            r++;

        while (r < m && b[r] == cur)
            cnt2++, r++;
        ans += (1LL * cnt1 * cnt2);
    }
    cout << ans << nl;
    return 0;
}