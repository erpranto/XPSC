//https://cses.fi/problemset/task/1091

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
    int n, m;
    cin >> n >> m;

    multiset<int> tickets;
    for (int i = 0; i < n; i++)
    {
        int h;
        cin >> h;
        tickets.insert(h);
    }
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        auto it = tickets.upper_bound(t);
        if (it == tickets.begin())
        {
            cout << -1 << nl;
        }
        else
        {
            it--;
            cout << *it << nl;
            tickets.erase(it);
        }
    }
    return 0;
}