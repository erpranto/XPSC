//https://codeforces.com/problemset/problem/1792/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
        vector<int> v(n);
        int one = 0, more = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
                one++;
            if (v[i] > 1)
                more++;
        }
        if (one % 2 == 0)
            cout << more + one / 2 << "\n";

        else
            cout << more + one / 2 + 1 << "\n";
    }
    return 0;
}