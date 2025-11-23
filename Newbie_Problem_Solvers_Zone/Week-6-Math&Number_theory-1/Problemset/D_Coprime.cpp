//https://codeforces.com/problemset/problem/1742/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define nl '\n'

int main()
{
    FAST;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n+1), last(1001, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            last[a[i]] = i;
        }
        int ans = -1;
        for (int i = 1; i <= 1000; i++)
        {
            if (last[i] == 0)
                continue;
            for (int j = 1; j <= 1001; j++)
            {
                if (last[j] == 0)
                    continue;
                else if (__gcd(i, j) == 1)
                {
                    ans = max(ans, last[i] + last[j]);
                }
            }
        }
        cout << ans << nl;
    }
    return 0;
}