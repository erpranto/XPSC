//https://atcoder.jp/contests/abc066/tasks/arc077_a?lang=en

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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            dq.push_back(a[i]);
        else
            dq.push_front(a[i]);
    }
    if (n % 2 != 0)
        reverse(dq.begin(), dq.end());

    for (int i = 0; i < n; i++)
    {
        cout << dq[i] << " ";
    }
    return 0;
}