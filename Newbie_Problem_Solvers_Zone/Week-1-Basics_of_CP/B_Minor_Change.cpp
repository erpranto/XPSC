//https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (s[i] != t[i])
            cnt++;
    }
    cout << cnt << "\n";
    return 0;
}