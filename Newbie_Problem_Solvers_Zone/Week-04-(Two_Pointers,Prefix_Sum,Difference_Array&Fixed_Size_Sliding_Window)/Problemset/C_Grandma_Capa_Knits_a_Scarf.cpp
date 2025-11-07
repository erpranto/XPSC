//https://codeforces.com/problemset/problem/1582/C

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
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        input(n);
        string s;
        cin >> s;
        ll ans = LLONG_MAX;
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            ll cnt = 0;
            bool flag = true;
            int l = 0, r = n - 1;
            while (l < r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else if (s[r] == ch)
                {
                    cnt++;
                    r--;
                }
                else if (s[l] == ch)
                {
                    cnt++;
                    l++;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                ans = min(ans, cnt);
        }
        if (ans == LLONG_MAX)
            cout << -1 << nl;

        else
            cout << ans << nl;
    }
    return 0;
}