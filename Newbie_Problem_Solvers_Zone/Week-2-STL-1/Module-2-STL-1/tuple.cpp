#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // tuple<string, int, string> t = make_tuple("Rahim", 10, "017");
    //  tuple<string, int, string> t = {"Rahim", 10, "017"};
    //  // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t);

    // auto [name, roll, num] = t;
    // cout << name << " " << roll << " " << num;

    int n;
    cin >> n;
    tuple<string, int, int> t[n];
    for (int i = 0; i < n; i++)
        cin >> get<0>(t[i]) >> get<1>(t[i]) >> get<2>(t[i]);

    // for (int i = 0; i < n; i++)
    //     cout << get<0>(t[i]) << " " << get<1>(t[i]) << " " << get<2>(t[i]) << nl;

    for (auto [x, y, z] : t)
        cout << x << " " << y << " " << z << nl;

    return 0;
}