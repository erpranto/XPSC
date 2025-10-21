// https://cses.fi/problemset/task/1755/

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
    map<char, int> cnt;
    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i]]++;
    }
    int num_of_odd_freq = 0;
    char ch;
    string ans;
    for (auto [c, f] : cnt)
    {
        if (f % 2 == 1)
        {
            num_of_odd_freq++;
            ch = c;
        }
        for (int i = 0; i < f / 2; i++)
            ans.push_back(c);
    }
    if (num_of_odd_freq == 0)
    {
        cout << ans;
        reverse(ans.begin(), ans.end());
        cout << ans << nl;
    }
    else if (num_of_odd_freq == 1)
    {
        cout << ans << ch;
        reverse(ans.begin(), ans.end());
        cout << ans << nl;
    }
    else
    {
        cout << "NO SOLUTION" << nl;
    }
    return 0;
}