// https://open.kattis.com/problems/backspace

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
    string ans = "";
    for (char c : s)
    {
        if (c == '<' && !ans.empty())
            ans.pop_back();
        else
            ans.push_back(c);
    }
    cout << ans << nl;
    return 0;
}