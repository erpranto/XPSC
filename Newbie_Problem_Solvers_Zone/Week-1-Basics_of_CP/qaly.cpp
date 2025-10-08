//https://open.kattis.com/problems/qaly

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    double ans = 0.0;
    for (int i = 0; i < n; i++)
    {
        double q, y;
        cin >> q >> y;
        ans += q * y;
    }
    cout <<fixed<< setprecision(3) << ans<<endl;
    return 0;
}