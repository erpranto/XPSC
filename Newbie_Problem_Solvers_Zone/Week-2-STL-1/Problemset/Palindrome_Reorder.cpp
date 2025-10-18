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
    map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    int odd = 0;
    char mid;
    for (auto [c, i] : mp)
    {
        if (i % 2 != 0)
        {
            odd++;
            mid = c;
        }
    }
    if (odd > 1)
    {
        cout << "NO SOLUTION" << nl;
        return 0;
    }
    string fst = "", lst = "";
    for (auto [c, i] : mp)
    {
        fst.insert(fst.end(), i / 2, c);
        lst.insert(lst.begin(), i / 2, c);
    }
    if (odd == 1)
        cout << fst << mid << lst << nl;
    else
        cout << fst << lst << nl;
    return 0;
}