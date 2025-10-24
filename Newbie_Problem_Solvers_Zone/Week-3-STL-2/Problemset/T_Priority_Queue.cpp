//https://onlinejudge.u-aizu.ac.jp/problems/ITP2_2_C

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
    ll n, q;
    cin >> n >> q;
    vector<priority_queue<ll>> pq(n);
    while (q--)
    {
        ll cmd, t;
        cin >> cmd >> t;
        if (t < 0 || t >= n)
            continue;
        if (cmd == 0)
        {
            ll x;
            cin >> x;
            pq[t].push(x);
        }
        else if (cmd == 1)
        {
            if (!pq[t].empty())
                cout << pq[t].top() << nl;
        }
        else if (cmd == 2)
        {
            if (!pq[t].empty())
                pq[t].pop();
        }
    }
    return 0;
}