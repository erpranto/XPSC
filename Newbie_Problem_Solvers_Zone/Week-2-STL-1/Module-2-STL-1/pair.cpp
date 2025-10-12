#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // pair<string, int> stu = {"pranto", 10};
    // // cout << stu.first << " " << stu.second << nl;
    // stu.first = "Bablu";
    // auto [name, roll] = stu;
    // cout << name << " " << roll << nl;

    int n;
    cin >> n;
    pair<string, int> stu[n];
    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].first >> stu[i].second;
    }
    for (auto [x, y] : stu)
    {
        cout << x << ' ' << y << nl;
    }
    return 0;
}