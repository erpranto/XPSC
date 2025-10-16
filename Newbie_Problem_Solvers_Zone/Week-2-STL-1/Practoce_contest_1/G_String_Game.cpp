//https://vjudge.net/contest/757589#problem/G

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt0 = 0, cnt1 = 0;
        for (auto c : s)
        {
            if (c == '0')
                cnt0++;
            else
                cnt1++;
        }
        int move = min(cnt0, cnt1);
        if (move % 2 != 0)
            cout << "Zlatan\n";
        else
            cout << "Ramos\n";
    }
    return 0;
}