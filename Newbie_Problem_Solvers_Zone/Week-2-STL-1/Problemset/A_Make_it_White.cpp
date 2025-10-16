// https://codeforces.com/problemset/problem/1927/A

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
        int l = s.find('B'), r = s.rfind('B');
        // int l,r;
        //  for (int i = 0; i < n; i++)
        //  {
        //      if (s[i] == 'B')
        //      {
        //          l = i;
        //          break;
        //      }
        //  }
        //  for (int i = n - 1; i >= 0; i--)
        //  {
        //      if (s[i] == 'B')
        //      {
        //          r = i;
        //          break;
        //      }
        //  }
        cout << abs(r - l + 1) << nl;
    }
    return 0;
}