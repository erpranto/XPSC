//https://codeforces.com/problemset/problem/862/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.insert(val);
    }
    int op = 0;
    for (int i = 0; i < x; i++)
    {
        if (s.find(i) == s.end())
            op++;
    }
    if (s.find(x) != s.end())
        op++;
    cout << op << "\n";
    return 0;
}