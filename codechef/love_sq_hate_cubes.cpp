#include <bits/stdc++.h>
#define ll unsigned long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool func(ll N,ll x)
{
    ll s = sqrt(N);
    ll c = cbrt(N);

    return (s-c)>=x;
}
ll bsearch(ll l,ll h, ll x)
{
    ll m;
    while(l<=h)
    {
        m = l+(h-l)/2;
        bool r1 = func(m,x);
        if(!r1)
        l = m+1;
        else
        {
            if(m==9)
            return 4;
            bool r2 = func(m-1,x);
            if(!r2)
            return m;
            else
            h = m-1;
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
        ll x,  h = ULLONG_MAX;
        cin>>x;
        for(int i=1;i<h;i++)
        {
            bool r1 = func(i,x);
            if(r1)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}