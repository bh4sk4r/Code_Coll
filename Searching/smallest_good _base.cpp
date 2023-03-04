#include <bits/stdc++.h>
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int decide_m(ll m,ll N,int j)
{
    ll sum=0,x=1;
    for(int i=0;i<j;i++)
    {
        sum+=x;
        if(((N-sum)/m)<x)
        return 2;
        x*=m;
    }
    if(sum<N)
    return 0;
    if(sum==N)
    return 1;
    if(sum>N)
    return 2;
}

ll bsearch(ll N, ll l,ll h,int j)
{
    ll m;
    while(l<=h)
    {
        m = l+(h-l)/2;
        if(!decide_m(m,N,j))
        l = m+1;
        else
        {
            if(decide_m(m,N,j)==1)
            return m;
            else
            h = m-1;
        }
    }
    return -1;
}

ll sol(ll N)
{
    for(int i=63;i>=1;i++)
    {
        ll m = bsearch(N,2,N-1,i);
        if(m>0)
        return m;
    }
    return N-1;
}
int main()
{
    fastio;
    
    return 0;
}