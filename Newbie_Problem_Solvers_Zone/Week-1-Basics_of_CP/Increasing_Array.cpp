//https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll cnt = 0;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            cnt += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }
    cout << cnt << nl;
    return 0;
}