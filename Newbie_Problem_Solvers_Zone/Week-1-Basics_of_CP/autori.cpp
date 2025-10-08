//https://open.kattis.com/problems/autori

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    for(char c:s)
    {
        if(c>='A'&&c<='Z')
            cout<<c;
    }
    return 0;
}