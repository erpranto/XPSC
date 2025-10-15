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
    vector<int> v;
    // v.assign(n,0);
    // v.resize(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    // cout << v.size() << nl;
    // v.pop_back();
    // cout << v.size() << nl;
    // cout << v.front() << nl;
    // cout << v.back() << nl;
    // v.clear();
    // cout << v.empty() << nl;
    // reverse(v.begin(),v.end());
    // sort(v.begin(),v.end());
    // sort(v.begin(),v.end(),greater<int>());

    // auto mx = min_element(v.begin(), v.end());
    // auto mn = max_element(v.begin(), v.end());
    // cout << *mn << " " << *mx << nl;
    // int mn_position = mn - v.begin();
    // int mx_position = mx - v.begin();
    // cout << "Position-> Min -" << mn_position << " Max -" << mx_position << nl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << nl;
    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    return 0;
}