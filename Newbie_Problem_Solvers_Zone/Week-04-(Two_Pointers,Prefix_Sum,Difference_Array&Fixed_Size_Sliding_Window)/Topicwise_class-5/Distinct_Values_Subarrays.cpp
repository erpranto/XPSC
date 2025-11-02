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
    int n;
    cin>>n;
    map<ll,ll>last_idx;
    ll ans=0;
    for(ll i=1,j=1;i<=n;i++){
        ll x;
        cin>>x;
        j=max(j,last_idx[x]+1);
        last_idx[x]=i;
        ans+=(i-j+1);
    }
    cout<<ans<<nl;
    return 0;
}