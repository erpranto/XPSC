#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    // cin >> n >> m;
    cin >> n;
    // vector<vector<int>> v(n, vector<int>(m, 0));
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> a;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        v.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        for (auto val : v[i])
            cout << val << " ";
        // for (int j = 0; j < v[i].size(); j++)
        // {
        //     cout << v[i][j] << " ";
        // }
        cout << nl;
    }
    return 0;
}