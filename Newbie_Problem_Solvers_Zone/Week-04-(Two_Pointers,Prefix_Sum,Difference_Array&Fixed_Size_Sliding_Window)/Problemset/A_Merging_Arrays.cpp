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
    int n, m;
    cin >> n >> m;
    priority_queue<int, vector<int>, greater<int>> pq1, pq2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq1.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        pq2.push(x);
    }
    vector<int> v;
    while (!pq1.empty() && !pq2.empty())
    {
        int a = pq1.top(), b = pq2.top();
        if (a < b)
        {
            v.push_back(a);
            pq1.pop();
        }
        else
        {
            v.push_back(b);
            pq2.pop();
        }
    }
    while (!pq1.empty())
    {
        v.push_back(pq1.top());
        pq1.pop();
    }
    while (!pq2.empty())
    {
        v.push_back(pq2.top());
        pq2.pop();
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}