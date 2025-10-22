// https://codeforces.com/problemset/problem/1506/D

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
    while (tc--)
    {
        int n;
        cin >> n;
        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }
        priority_queue<int> pq;
        for (auto [x, y] : cnt)
        {
            pq.push(y);
        }
        while (!pq.empty())
        {
            if (pq.size() < 2)
            {
                break;
            }
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            x--, y--;
            if (x > 0)
                pq.push(x);
            if (y > 0)
                pq.push(y);
        }
        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << nl;
    }
    return 0;
}