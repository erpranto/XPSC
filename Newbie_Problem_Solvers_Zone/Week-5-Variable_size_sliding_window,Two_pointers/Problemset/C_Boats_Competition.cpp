//https://codeforces.com/problemset/problem/1399/C

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
        int n;
        cin >> n ;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 2; i <= 100; i++)
        {
            int l = 0, r = n - 1, cnt = 0;
            while (l < r)
            {
                int sum = v[l] + v[r];
                if (sum == i)
                    cnt++, l++, r--;

                else if (sum < i)
                    l++;

                else
                    r--;
            }
            ans = max(ans, cnt);
        }
        cout << ans << nl;
    }
    return 0;
}