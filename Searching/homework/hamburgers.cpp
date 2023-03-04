#include <bits/stdc++.h>
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
ll sub(ll a,ll b)
{
    if(a>b)
    return a-b;
    else
    return 0;
}
ll cost_cal(string recipe,ll m,vector<ll>& c,vector<ll>& avail)
{
    ll rb=0,rs=0,rc=0,db,ds,dc;
    for(ll i=0;i<recipe.size();i++)
    {
        if(recipe[i]=='B')
        rb++;
        if(recipe[i]=='S')
        rs++;
        if(recipe[i]=='C')
        rc++;
    }
    db = rb*m, ds = rs*m, dc = rc*m;
    ll cost = sub(db,avail[0])*c[0] + sub(ds,avail[1])*c[1] + sub(dc,avail[2])*c[2];
    return cost;
}

ll sol(string recipe,vector<ll>& c, vector<ll>& avail,ll l, ll h,ll r)
{
    ll m;
    while(l<=h)
    {
        m = l+(h-l)/2;
        ll cost = cost_cal(recipe, m, c, avail);
        if(cost>r)
        h = m-1;
        else
        {
            ll c1 = cost_cal(recipe,m+1,c,avail);
            if(c1>r)
            return m;
            else
            l = m+1;
        }
    }
    return 0;
}
int main()
{
    fastio;
    string recipe;
    cin>>recipe;
    vector<int> rec(3,0);
    for(int i=0;i<recipe.size();i++)
    {
        if(recipe[i]=='B')
        rec[0]++;
        if(recipe[i]=='S')
        rec[1]++;
        if(recipe[i]=='C')
        rec[2]++;
    }
    vector<ll> avail(3), price(3);
    for(ll i=0;i<3;i++)
    {
        cin>>avail[i];
    }
    for(ll i=0;i<3;i++)
    cin>>price[i];

    int already=INT_MAX;
    for(int i=0;i<3;i++)
    {
        int ver = avail[i]/rec[i];
        if(ver < already)
        already = ver; 
    }
    ll r;
    cin>>r;
    ll h = LONG_LONG_MAX;
    cout<<sol(recipe,price,avail,1,h,r)+already;
    return 0;
}