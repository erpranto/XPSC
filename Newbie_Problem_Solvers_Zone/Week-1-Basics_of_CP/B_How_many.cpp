//https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll s, t, cnt = 0;
    cin >> s >> t;
    for (ll i = 0; i <= s; i++)
    {
        for (ll j = 0; j <= s; j++)
        {
            for (ll k = 0; k <= s; k++)
            {
                if (i + j + k <= s && i * j * k <= t)
                    cnt++;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}