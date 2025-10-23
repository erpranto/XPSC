//https://www.codechef.com/problems/P4209

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

int main()
{
    FAST;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int one = 0, lenght = 0, max_lenght = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one++;
                lenght++;
                max_lenght = max(lenght, max_lenght);
            }
            else
            {
                lenght = 0;
            }
        }

        if (one == 2 && max_lenght == 2)
            cout << "No" << nl;

        else if (one == 3 && max_lenght == 3)
            cout << "No" << nl;

        else
            cout << "Yes" << nl;
    }
    return 0;
}