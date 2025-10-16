//https://vjudge.net/contest/757589#problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int x = min(b, c);
    cout << min(a, x) << nl;
    return 0;
}