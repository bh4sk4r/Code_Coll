#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int check(int n,int m,int i)
{
    int sum=0,x=1;
    for(int j=0;j<i;j++)
    {
        sum+=x;
        if(sum>n)
        return 2;
        if(((n-sum)/x) < m)
        return 2;
        x*=m;
    }
    if (sum == n)
        return 0;
    if(sum<n)
        return 1;
    else
        return 2;
}

int bsearch(int l,int h,int i,int n)
{
    int m;
    while(l<=h)
    {
        m = l+(h-l)/2;
        int r = check(n,m,i);
        if(r==0)
        return m;
        if(r==1)
        l = m+1;
        else
        h = m-1;
    }
    return -1;
}
int sol(int n)
{
    int l = 2,h = n,ans;
    for(int i=64;i>0;i--)
    {
        ans = bsearch(l,h,i,n);
        if(ans>0)
        break;
    }
    return ans;
}

int main()
{
    fastio;
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        cout<<sol(n)<<endl;
    }
    return 0;
}