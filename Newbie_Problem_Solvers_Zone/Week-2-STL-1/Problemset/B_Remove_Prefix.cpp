// https://codeforces.com/problemset/problem/1714/B

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<int> st;
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (st.count(v[i]))
                break;
            st.insert(v[i]);
            cnt++;
        }
        cout << v.size() - cnt << nl;
    }
    return 0;
}