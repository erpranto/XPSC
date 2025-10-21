#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // map<vector<int>, int> mp;
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(7);
    // v.push_back(8);
    // v.push_back(4);
    // mp[v] = v.size();
    // for (auto [v, x] : mp)
    // {
    //     cout << x << nl;
    //     for (auto val : v)
    //         cout << val << " ";
    //     cout << nl;
    // }

    map<int, set<int>> mp;
    set<int> s1;
    s1.insert(1);
    s1.insert(3);
    s1.insert(6);
    set<int> s2;
    s2.insert(1);
    s2.insert(5);
    s2.insert(9);
    set<int> s3;
    s3.insert(1);
    s3.insert(7);
    s3.insert(4);

    mp[5] = s1;
    mp[7] = s2;
    mp[10] = s3;
    for (auto [x, st] : mp)
    {
        cout << x << "-> ";
        for (auto val : st)
            cout << val << " ";
        cout << nl;
    }

    int x = 6, y = 8;
    auto lb1 = mp.lower_bound(x);
    if (lb1 != mp.end())
    {
        auto ans = lb1->first;
        cout << ans << nl;
        auto lb2 = mp[ans].lower_bound(y);
        if (lb2 != mp[ans].end())
        {
            cout << *lb2 << nl;
        }
    }
    return 0;
}