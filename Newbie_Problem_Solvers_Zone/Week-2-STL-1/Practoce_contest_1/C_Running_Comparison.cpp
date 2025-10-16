//https://vjudge.net/contest/757589#problem/C

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
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int day = 0;
        for (int i = 0; i < n; i++)
        {
            bool alice = (b[i] <= 2 * a[i]);
            bool bob = (a[i] <= 2 * b[i]);
            if (alice && bob)
                day++;
        }
        cout << day << nl;
    }
    return 0;
}