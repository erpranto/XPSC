#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    deque<int> dq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    // dq.push_front(10);
    // dq.push_back(100);
    // dq.pop_back();
    // dq.pop_front();
    //int first_val = dq.front();
    //int last_val = dq.back();
    for (auto val : dq)
    {
        cout << val << " ";
    }
    cout << nl;
    return 0;
}