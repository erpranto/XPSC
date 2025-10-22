//https://codeforces.com/problemset/problem/1468/C

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
    int n;
    cin >> n;
    set<pair<int, int>> st;
    multiset<pair<int, int>> ml;
    vector<int> ans;
    int position = 1;
    for (int i = 0; i < n; i++)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 1)
        {
            int money;
            cin >> money;
            st.insert({position, money});
            ml.insert({money, -position});
            position++;
        }
        else if (cmd == 2)
        {
            int pos = st.begin()->first, money = st.begin()->second;
            ans.push_back(pos);
            st.erase(st.begin());
            ml.erase({money, -pos});
        }
        else
        {
            int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            st.erase({pos, money});
        }
    }
    for (auto val : ans)
        cout << val << " ";
    return 0;
}