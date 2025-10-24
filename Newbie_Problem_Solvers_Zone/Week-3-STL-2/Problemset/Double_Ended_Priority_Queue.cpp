//https://judge.yosupo.jp/problem/double_ended_priority_queue

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
    multiset<ll> ml;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ml.insert(x);
    }
    while (q--)
    {
        ll cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            ll x;
            cin >> x;
            ml.insert(x);
        }
        else if(cmd==1){
            auto it=ml.begin();
            cout<<*it<<nl;
            ml.erase(it);
        }
        else if(cmd==2){
            auto it=--ml.end();
            cout<<*it<<nl;
            ml.erase(it);
        }
    }
    return 0;
}