//using bsearch
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int first_occ(vector<int>& arr,int l,int h,int target)
{
    int n = arr.size();
    int m;
    while(l<=h)
    {
        m = l+(h-l)/2;
        if(arr[m]>target)
        h = m-1;
        else if(arr[m]<target)
        l = m+1;
        else
        {
            if(m==l)
            return m;
            if(arr[m-1]!=target)
            return m;
            else
            h = m-1;
        }
    }
    return -1;
}
int last_occ(vector<int>& arr,int l,int h,int target)
{
    int n = arr.size();
    int m;
    while(l<=h)
    {
        m = l+(h-l)/2;
        if(arr[m]>target)
        h = m-1;
        else if(arr[m]<target)
        l = m+1;
        else
        {
            if(m==n-1)
            return m;
            if(arr[m+1]!=target)
            return m;
            else
            l = m+1;
        }
    }
    return -1;
}
int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int sum,ctr=0;
    cin>>sum;
    for(int i=0;i<n;i++)
    {
        int fo = first_occ(arr,i+1,n-1,sum-arr[i]);
        int lo = last_occ(arr,i+1,n-1,sum-arr[i]);
       // cout<<fo<<" "<<lo<<" ";
        int x;
        if(fo>0)
        {
            x = lo-fo+1;
            ctr+=x;
        }
        //cout<<x<<" "<<ctr<<endl;
    }
    cout<<ctr<<endl;
    return 0;
}