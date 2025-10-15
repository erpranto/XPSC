// https://cses.fi/problemset/task/1619

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, +1});
        v.push_back({y, -1});
    }
    sort(v.begin(), v.end());

    int mx = 0, now = 0;
    for (auto it : v)
    {
        now += it.second;
        mx = max(mx, now);
    }
    cout << mx;
    return 0;
}