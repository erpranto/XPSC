//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2113

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
        int a, b;
        cin>>a>>b;
        if (a > b)
            cout << ">\n";
        if (a < b)
            cout << "<\n";
        if (a == b)
            cout << "=\n";
    }
    return 0;
}