// https://cses.fi/problemset/task/1163

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, n;
    cin >> x >> n;
    set<int> lights;
    multiset<int> distences;
    lights.insert(0);
    lights.insert(x);
    distences.insert(x);
    for (int i = 1; i <= n; i++)
    {
        int p;
        cin >> p;

        auto it = lights.upper_bound(p);
        int right = *it;
        it--;
        int left = *it;
        distences.erase(distences.find(right - left));
        distences.insert(right - p);
        distences.insert(p - left);
        lights.insert(p);
        cout << *distences.rbegin() << " ";
    }
    return 0;
}