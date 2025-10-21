// https://cses.fi/problemset/task/1622/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> ans;
    ans.push_back(s);

    while (next_permutation(s.begin(), s.end()))
        ans.push_back(s);

    cout << ans.size() << nl;

    for (auto u : ans)
        cout << u << nl;
    return 0;
}