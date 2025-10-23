//https://www.codechef.com/problems/P3209

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define nl '\n'

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first != b.first)
        return a.first > b.first; // higher score
    return a.second < b.second;   // lower player number
}

int main()
{
    FAST;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> players; //{score,player_number}
        for (int i = 1; i <= n; i++)
        {
            int score = __gcd(i, n);
            players.push_back({score, i});
        }
        sort(players.begin(), players.end(), cmp);

        for (auto ans : players)
        {
            cout << ans.second << " ";
        }
        cout << nl;
    }
    return 0;
}