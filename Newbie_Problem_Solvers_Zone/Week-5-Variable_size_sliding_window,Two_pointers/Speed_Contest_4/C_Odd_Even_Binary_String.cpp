// /https://vjudge.net/contest/765715#problem/C

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
        int cnt = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            cnt += v[i];
        }
        if (cnt % 2 == n % 2)
            HA else NA
    }
    return 0;
}