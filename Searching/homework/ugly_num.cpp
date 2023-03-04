#include <bits/stdc++.h>
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

ll lcm(ll a,ll b)
{
    ll minm = min(a,b);
    ll maxm = max(a,b);
    while(maxm%minm!=0)
    {
        ll temp = minm;
        minm = maxm%minm;
        maxm = temp;
    }
    ll hcf = minm;
    return a*b/hcf;
}

ll less_te(ll n,ll a,ll b,ll c)
{
    ll T1 = (n/a) + (n/b) + (n/c);
    ll l1 = lcm(lcm(a,b),c);
    ll T2 = T1 - n/lcm(a,b) - n/lcm(b,c) - n/lcm(c,a) + n/l1;
    return T2;
}

ll sol(ll l,ll h, ll a,ll b,ll c,ll k)
{
    ll m,count;
    while(l<=h)
    {
        m = l+(h-l)/2;
        count = less_te(m, a, b, c);
        cout<<m<<" "<<count<<" "<<a<<" "<<b<<" "<<c<<" "<<l<<" "<<h<<endl;
       if(count<k)
       l = m+1;
       else
       {
        if(less_te(m-1,a,b,c)<k)
        return m;
        else h = m-1;
       }
    }
    return -1;
}
int main()
{
    fastio;
    int T;
    cin>>T;
    while(T--)
    {
        ll a,b,c,k;
        cin>>k>>a>>b>>c;
        
        ll l = min(a,min(b,c));
        ll h = max(a,max(b,c));
        h *= k;
        cout<<sol(l,h,a,b,c,k)<<endl;
    }
    return 0;
}