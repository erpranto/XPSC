#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<int, int> mp;
    // mp.insert({2, 13});
    mp[2] = 12;
    mp[10] = 15;
    mp[22] = 14;
    mp[23] = 22;
    mp[8] = 32;

    // for (auto [key, val] : mp)
    // {
    //     cout << key << "->" << val << nl;
    // }
    // cout<<nl;

    // auto it = mp.find(25);
    // if (it == mp.end())
    // {
    //     cout << "No Key Found\n";
    // }
    // else
    //     cout << it->first << " " << it->second << nl;

    // if (mp.find(8) != mp.end())
    //     mp.erase(8);

    cout << mp.size() << nl;
    // mp.clear();
    cout << mp.empty() << nl;

    for (auto it : mp)
    {
        int key = it.first, val = it.second;
        cout << key << " -> " << val << nl;
    }

    // auto it = mp.lower_bound(8); // Return the equal idx or exact greater iterator
    // cout << it->first << " " << it->second << nl;

    auto it = mp.upper_bound(8); // Return the exact greater iterator
    cout << it->first << " " << it->second << nl;

    return 0;
}