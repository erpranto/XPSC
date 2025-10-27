#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define nl '\n'

int main()
{
    FAST;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int c = 0, ch = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
                continue;
            if ((a[i] == 'R' && b[i] == 'S') ||
                (a[i] == 'S' && b[i] == 'P') ||
                (a[i] == 'P' && b[i] == 'R'))
                c++;
            else
                ch++;
        }
        int ans = (ch - c + 1 + 1) / 2;
        cout << max(0, ans) << nl;
    }
    return 0;
}