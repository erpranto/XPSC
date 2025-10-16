//https://vjudge.net/contest/757589#problem/E

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    if(s1==s2)
        cout<<s1<<nl;
    else
        cout<<1;
    return 0;
}