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
        string s, t;
        cin >> s >> t;
        int s0 = 0, s1 = 0, t0 = 0, t1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                s0++;
            else
                s1++;
            if (t[i] == '0')
                t0++;
            else
                t1++;
        }
        if (s0 == t0 && s1 == t1)
            HA else NA
    }
    return 0;
}