// https://codeforces.com/problemset/problem/2092/B

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
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        int aeven = 0, aodd = 0, freeeven = 0, freeodd = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] == '1')
                    aeven++;
                if (b[i] == '0')
                    freeeven++;
            }
            else
            {
                if (a[i] == '1')
                    aodd++;
                if (b[i] == '0')
                    freeodd++;
            }
        }
        if (freeeven >= aodd && freeodd >= aeven)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}