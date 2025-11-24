//https://www.codechef.com/problems/BINPARITY

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
#define HA cout << "YES" << '\n';
#define NA cout << "NO" << '\n';
#define nl '\n'
#define mod 1000000007
#define N 500005
ll fx[] = {0, 0, 1, -1, 1, 1, -1, -1};
ll fy[] = {1, -1, 0, 0, -1, 1, -1, 1};

int to_binary(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans += n % 2;
        n = n / 2;
    }
    return ans;
}
int main()
{
    FAST;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int x = to_binary(n);
        if (x % 2 == 0)
            cout << "EVEN\n";
        else
            cout << "ODD" << nl;
    }
    return 0;
}