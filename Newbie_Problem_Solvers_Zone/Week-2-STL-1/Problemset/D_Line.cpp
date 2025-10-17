// https://codeforces.com/problemset/problem/1722/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> v;
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            ll val = 0;
            if (s[i] == 'L')
                val = i;
            else
                val = n - 1 - i;
            total += val;
            ll maxValue = max(i, n - 1 - i);
            ll gain = maxValue - val;
            if (gain > 0)
            {
                v.push_back(gain);
            }
        }
        sort(v.rbegin(), v.rend());
        vector<ll> answer(n);
        ll current = total;
        ll m = v.size();
        for (ll i = 0; i < n; i++)
        {
            if (i < m)
                current += v[i];
            answer[i] = current;
        }
        for (ll i = 0; i < n; i++)
            cout << answer[i] << " ";
        cout << nl;
    }
    return 0;
}