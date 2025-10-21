//https://codeforces.com/problemset/problem/368/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1), cnt(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    set<int> st;
    for (int i = n; i > 0; i--)
    {
        int x = v[i];
        st.insert(x);
        cnt[i] = st.size();
    }
    while (m--)
    {
        int l;
        cin >> l;

        cout << cnt[l] << nl;
    }
    return 0;
}