#include <bits/stdc++.h>
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
ll helper(vector<ll>& price,ll k)
{
    ll n = price.size();
    ll sum=0;
    vector<ll> cost(n);
    for(ll i=0;i<n;i++)
    {
        cost[i] = price[i]+k*(i+1);
    }
    sort(cost.begin(),cost.end());
    for(ll i=0;i<k;i++)
    sum+=cost[i];
    return sum;
}
pair<ll,ll> sol(vector<ll> price,ll l,ll h,ll S)
{
    ll m;
    while(l<=h)
    {
        m = l + (h-l)/2;
        ll r = helper(price,m);
        if(r>S)
        h = m-1;
        else
        {
            if(m==price.size())
                return make_pair(m,r);
            ll r1 = helper(price,m+1);
            if(r1>S)
                return make_pair(m, r);
            else
            l = m+1;
        }
    }
    return make_pair(0,0);

}
int main()
{
    fastio;
    ll n,S;
    cin>>n>>S;
    vector<ll> price(n);
    for(ll i=0;i<n;i++)
    cin>>price[i];
    ll l = 1,h = n;
    pair<ll,ll> ans;
    ans = sol(price,l,h,S);
    cout<<ans.first<<" "<<ans.second<<endl;
    return 0;
}