#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    // s.push_back('a');
    // s.pop_back();
    // cout << s.front() << nl;
    // cout << s.back() << nl;

    cout << s.substr(0, 3) << nl;
    cout << s.substr(2) << nl;
    cout << s << nl;
    return 0;
}