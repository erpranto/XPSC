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
    // for (auto val : ml)
    //     cout << val << " ";
    // cout << nl;
    // auto it = ml.find(15);
    // if (it != ml.end())
    // {
    //     cout << "Found\n";
    // }
    // else
    //     cout << "NOT Found\n";

    // ml.erase(6); //O(logn + k)

    // cout << ml.count(9) << nl;

    // int x;
    // cin >> x;
    // auto it = ml.lower_bound(x);
    // if (it == ml.end())
    //     cout << "END\n";
    // else
    //     cout << *it << nl;

    int x;
    cin >> x;
    auto it = ml.upper_bound(x);
    if (it == ml.end())
        cout << "END\n";
    else
        cout << *it << nl;

    for (auto val : ml)
        cout << val << " ";
    cout << nl;

    return 0;
}