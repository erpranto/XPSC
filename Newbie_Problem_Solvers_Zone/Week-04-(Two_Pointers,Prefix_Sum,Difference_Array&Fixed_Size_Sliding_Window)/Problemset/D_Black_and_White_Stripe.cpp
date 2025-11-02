//https://codeforces.com/problemset/problem/1690/D

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
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W')
                cnt++;
        }
        int ans = cnt;

        for (int i = k; i < n; i++)
        {
            if (s[i] == 'W')
                cnt++;
            if (s[i - k] == 'W')
                cnt--;
            ans = min(ans, cnt);
        }
        cout << ans << nl;
    }
    return 0;
}