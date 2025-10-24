//https://cses.fi/problemset/task/1073/

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
    multiset<int> mls;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        auto it = mls.upper_bound(x);
        if (it == mls.end())
        {
            mls.insert(x);
        }
        else
        {
            mls.erase(it);
            mls.insert(x);
        }
    }
    cout << mls.size() << nl;
    return 0;
}