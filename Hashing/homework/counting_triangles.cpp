#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
#define mod 10000
using namespace std;

int main()
{
    fastio;
    ll n,ans=0;
    cin>>n;
    unordered_map<ll,ll> x_map, y_map;
    vector<vector<ll>> polls;
    ll x,y;
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        x_map[x]++;
        y_map[y]++;
        polls.push_back({x,y});
    }
    for(ll i=0;i<n;i++)
    {
        x = polls[i][0];
        y = polls[i][1];
        if(x_map.find(x)!=x_map.end() && y_map.find(y)!=y_map.end())
        {
            ans += (x_map[x]-1)*(y_map[y]-1);
        }
    }
    cout<<ans%mod<<endl;
    return 0;
}