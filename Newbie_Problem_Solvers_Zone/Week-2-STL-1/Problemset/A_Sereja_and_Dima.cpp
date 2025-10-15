//https://codeforces.com/problemset/problem/381/A

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
    int sreja = 0, dima = 0;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }
    int who = 1;
    while (!dq.empty())
    {
        int left = dq.front(), right = dq.back(), mx;
        mx = max(left, right);
        if (who % 2 != 0)
            sreja += mx;
        else
            dima += mx;
        if (mx == dq.front())
            dq.pop_front();
        else if (mx == dq.back())
            dq.pop_back();
        who++;
    }
    cout << sreja << " " << dima << nl;
    return 0;
}