// https://codeforces.com/problemset/problem/501/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    map<string, string> ans, has;
    while (q--)
    {
        string a, b;
        cin >> a >> b;
        if (has.find(a) != has.end())
        {
            string s = has[a];
            ans[s] = b;
            has.erase(a);
            has[b] = s;
        }
        else
        {
            ans[a] = b;
            has[b] = a;
        }
    }
    cout << ans.size() << nl;
    for (auto [a, b] : ans)
    {
        cout << a << " " << b << nl;
    }
    return 0;
}