// https://codeforces.com/problemset/problem/1579/E1

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
        deque<int> dq;
        dq.push_back(v[0]);

        for (int i = 1; i < n; i++)
        {
            if (v[i] < dq.front())
                dq.push_front(v[i]);
            else
                dq.push_back(v[i]);
        }
        for (auto val : dq)
            cout << val << " ";
        cout << nl;
    }
    return 0;
}