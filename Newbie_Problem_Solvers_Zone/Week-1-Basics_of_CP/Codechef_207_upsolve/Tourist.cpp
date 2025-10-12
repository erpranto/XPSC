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
        int n, a, b;
        cin >> n >> a >> b;
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            int dis = abs(a - x) + abs(b - y);
            ans = min(ans, dis);
        }
        cout << ans << nl;
    }
    return 0;
}