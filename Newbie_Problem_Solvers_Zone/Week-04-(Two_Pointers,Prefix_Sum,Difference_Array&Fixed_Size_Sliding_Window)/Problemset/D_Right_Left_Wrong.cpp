//https://codeforces.com/problemset/problem/2000/D

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
        vector<ll> v(n + 1), pref(n + 1, 0);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        pref[0] = v[0];
        for (int i = 1; i < n; i++)
            pref[i] = pref[i - 1] + v[i];
        string s;
        cin >> s;
        int l = 0, r = n - 1;
        ll sum = 0;
        bool flag = true;

        while (l < r)
        {
            while (l < n && s[l] != 'L')
                l++;
            while (s[r] != 'R' && r >= 0)
                r--;
            if (l < r)
            {
                sum += pref[r] - (l > 0 ? pref[l - 1] : 0);
                                     l++;
                r--;
            }
        }
        cout << sum << nl;
    }
    return 0;
}