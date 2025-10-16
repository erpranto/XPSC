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
        int n, x, k;
        cin >> n >> x >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        for (int i = 0; i < k && i < n; i++)
        {
            a[i] = 0;
            x += 100;
        }
        int rank = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > x)
            {
                rank++;
            }
        }
        cout << rank + 1 << endl;
    }
    return 0;
}