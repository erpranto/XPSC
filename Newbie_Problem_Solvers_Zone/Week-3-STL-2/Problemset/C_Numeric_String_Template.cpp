//https://codeforces.com/problemset/problem/2000/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
#define HA cout << "YES" << '\n';
#define NA cout << "NO" << '\n';
#define nl '\n'
#define mod 1000000007
#define N 500005
ll fx[] = {0, 0, 1, -1, 1, 1, -1, -1};
ll fy[] = {1, -1, 0, 0, -1, 1, -1, 1};

int main()
{
    FAST;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int x;
        cin >> x;
        while (x--)
        {
            string s;
            cin >> s;
            if (s.size() != n)
            {
                NA continue;
            }
            map<char, int> mp1;
            map<int, char> mp2;
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                mp1[s[i]] = v[i];
                mp2[v[i]] = s[i];
            }
            for (int i = 0; i < n; i++)
            {
                int num = v[i];
                int c = s[i];
                if (mp1[c] != num)
                {
                    flag = false;
                    break;
                }
                if (mp2[num] != c)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                HA 
            else 
                NA
        }
    }
    return 0;
}