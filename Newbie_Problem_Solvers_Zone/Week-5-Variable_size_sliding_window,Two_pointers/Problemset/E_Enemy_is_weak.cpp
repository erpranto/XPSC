//https://codeforces.com/problemset/problem/61/E

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
    int n;
    cin >> n;
    vector<int> v(n), inv(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    pbds<int> p;
    for (int i = n - 1; i > 0; i--)
    {
        inv[i] = p.order_of_key(v[i]);
        p.insert(v[i]);
    }
    p.clear();
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll cnt = p.size() - p.order_of_key(v[i]);
        ans += inv[i] * cnt;
        p.insert(v[i]);
    }
    cout << ans << nl;
    return 0;
}