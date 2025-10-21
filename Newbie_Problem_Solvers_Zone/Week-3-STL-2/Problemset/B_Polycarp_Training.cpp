//https://codeforces.com/problemset/problem/1165/B

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
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    int ans = 0, pb = 1;
    while (1)
    {
        auto lb = ml.lower_bound(pb);
        if (lb != ml.end())
        {
            ans++;
            ml.erase(lb);
        }
        else
        {
            break;
        }
        pb++;
    }
    cout << ans << nl;
    return 0;
}