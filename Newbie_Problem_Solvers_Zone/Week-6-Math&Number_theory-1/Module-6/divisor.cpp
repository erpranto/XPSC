#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define nl '\n'

int main()
{
    FAST;
    int n;
    cin >> n;
    // O(n)
    //  for (int i = 1; i <= n; i++)
    //  {
    //      if (n % i == 0)
    //          cout << i << " ";
    //  }

    // O(sqrt(n)logn)
    set<int> st;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            // cout << i << " " << n / i << " ";
            st.insert(i);
            st.insert(n / i);
        }
    }
    for (auto it : st)
    {
        cout << it << " ";
    }
    return 0;
}