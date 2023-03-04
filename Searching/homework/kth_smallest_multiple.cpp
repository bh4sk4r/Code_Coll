#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int row_c(int r,int m,int n)
{
    if(r*m<=n)
    return m;
    else
    return n/r;
}

int less_te(int r,int c,int n)
{
    int ctr=0;
    for(int i=1;i<=r;i++)
    {
        ctr+=row_c(i,c,n);
    }
    return ctr;
}

int sol(int l,int h,int r, int c, int k)
{
    int mid,count;
    while(l<=h)
    {
        mid = l+(h-l)/2;
        count = less_te(r,c,mid);
        //cout<<mid<<" "<<count<<" "<<l<<" "<<h<<endl;
        if(count<k)
        l = mid + 1;
        else
        {
            if(less_te(r,c,mid-1)<k)
            return mid;
            else
            h = mid - 1;
        }
    }
}
int main()
{
    fastio;
    int T;
    cin>>T;
    while(T--)
    {
        int m,n,k;
        cin>>m>>n>>k;
        cout<<sol(1,m*n,m,n,k)<<endl;
    }
    return 0;
}