// /https://codeforces.com/problemset/problem/816/B

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
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> diff(200002, 0), cnt(200002, 0), admisible(200002, 0), pfix(200002, 0);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        diff[l]++, diff[r + 1]--;
    }

    cnt[0] = diff[0];
    for (int i = 1; i <= 200000; i++)
        cnt[i] = cnt[i - 1] + diff[i];

    for (int i = 1; i <= 200000; i++)
        if (cnt[i] >= k)
            admisible[i] = 1;

    for (int i = 1; i <= 200000; i++)
        pfix[i] = pfix[i - 1] + admisible[i];

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << pfix[b] - pfix[a - 1] << nl;
    }
    return 0;
}