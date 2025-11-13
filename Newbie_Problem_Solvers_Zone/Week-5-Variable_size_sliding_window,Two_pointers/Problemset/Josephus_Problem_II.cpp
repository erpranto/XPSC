//https://cses.fi/problemset/task/2163

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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
// ordered_set_ms
#define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update>
// os.find_by_order(k) — k-th element in a set (counting from zero)
// os.order_of_key(k) — Number of items strictly smaller than k
int main()
{
    FAST;
    ordered_set s;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        s.insert(i);
    ll idx = 0;

    while (n)
    {
        idx = (idx + k) % n;
        auto it = s.find_by_order(idx);
        cout << *it << " ";
        s.erase(it);
        n--;
    }
    return 0;
}