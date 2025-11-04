//https://codeforces.com/problemset/problem/313/B

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
    string s;
    cin >> s;
    s = '@' + s;
    int n = s.size();
    vector<int> pre(n + 5);
    pre[0] = 1, pre[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i-1] + (s[i] == s[i - 1]);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l] << nl;
    }
    return 0;
}