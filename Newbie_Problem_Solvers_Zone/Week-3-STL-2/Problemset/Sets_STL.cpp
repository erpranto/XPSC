//https://www.hackerrank.com/challenges/cpp-sets/problem

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
    int tc = 1;
    cin >> tc;
    set<int> st;
    while (tc--)
    {
        int cmd, n;
        cin >> cmd >> n;
        if (cmd == 1)
        {
            st.insert(n);
        }
        if (cmd == 2)
        {
            if (st.find(n) != st.end())
                st.erase(n);
        }
        if (cmd == 3)
        {
            if (st.find(n) != st.end())
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}