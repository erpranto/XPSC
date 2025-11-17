// https://codeforces.com/problemset/problem/762/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
#define nl '\n'

int main()
{
    FAST;
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i != i)
                v.push_back(n / i);
        }
    }
    sort(all(v));
    if (k > v.size())
        cout << -1 << nl;
    else
        cout << v[k - 1] << nl;
    return 0;
}