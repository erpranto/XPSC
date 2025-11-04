//https://codeforces.com/problemset/problem/295/A

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
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n + 2), change(n + 2, 0), chnage_on_query(m + 2, 0);
    vector<pair<pair<ll, ll>, ll>> query(m + 2);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= m; i++)
        cin >> query[i].first.first >> query[i].first.second >> query[i].second;

    while (k--)
    {
        int l, r;
        cin >> l >> r;
        chnage_on_query[l]++;
        chnage_on_query[r + 1]--;
    }

    ll c = 0;
    for (int i = 1; i <= m; i++)
    {
        c += chnage_on_query[i];
        change[query[i].first.first] += query[i].second * c;
        change[query[i].first.second + 1] -= query[i].second * c;
    }

    c = 0;
    for (int i = 1; i <= n; i++)
    {
        c += change[i];
        a[i] += c;
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}