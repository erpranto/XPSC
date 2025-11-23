//https://codeforces.com/problemset/problem/2084/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    FAST;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(all(a));
        
        ll mn = a[0], g = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] % mn == 0)
                g = __gcd(g, a[i]);
        }
        if (g == mn)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}