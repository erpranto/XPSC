#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // priority_queue<int> pq;  //Non-Increasing
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     pq.push(x);
    // }
    // cout << pq.top() << nl;
    // pq.pop();
    // cout << pq.top() << nl;
    // cout << "Size=" << pq.size() << nl;
    // cout << pq.empty() << nl;

    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    // cout << pq.top() << nl;
    // pq.pop();
    // cout << pq.top() << nl;
    // cout << "Size=" << pq.size() << nl;
    // cout << pq.empty() << nl;

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}