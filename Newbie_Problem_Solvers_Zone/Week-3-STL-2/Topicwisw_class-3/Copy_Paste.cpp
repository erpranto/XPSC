//https://www.codechef.com/problems/RRCOPY

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
        set<int> st;
        while (n--)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        cout << st.size() << nl;
    }
    return 0;
}