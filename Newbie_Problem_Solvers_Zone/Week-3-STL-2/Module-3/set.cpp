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
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    // auto it = s.find(6);
    // if (it != s.end())
    //     cout << "Found\n";
    // else
    //     cout << "Not Found\n";
    // s.erase(6);
    // cout << s.count(6) << nl;

    // int x;
    // cin >> x;
    // auto it = s.lower_bound(x);
    // if (it == s.end())
    //     cout << "END\n";
    // else
    //     cout << "NO\n";

    int x;
    cin >> x;
    auto it = s.upper_bound(x);
    if (it == s.end())
        cout << "END\n";
    else
        cout << *it << nl;

    // for (auto val : s)
    // {
    //     cout << val << " ";
    // }
    // cout << nl;
    return 0;
}