#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int func(vector<int>& arr,int x)
{
    int ctr=0;
    for(int i=0;i<arr.size();i++)
    if(arr[i]<=x)
    ctr++;

    return ctr;
}
int bsearch(vector<int>& arr,int l,int h,int k)
{
    int m; 
    while(l<=h)
    {
    m = l + (h - l) / 2;
    if (func(arr,m) < k)
    l = m + 1;
    
    else{
        if(func(arr,m-1)<k)
        return m;
        else
        h = m-1;
    }
    
    }
}
int main()
{
    fastio;
    int N,minm = INT_MAX,maxm = INT_MIN;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
        if(arr[i]<minm)
        minm = arr[i];

        if(arr[i]>maxm)
        maxm = arr[i];
    }
    int k;
    cin>>k;
    cout<<bsearch(arr,minm,maxm,k);
    return 0;
}