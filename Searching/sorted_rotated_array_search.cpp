#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int pivot(vector<int> arr,int l,int h)
{
    int m;
    int n = arr.size();
    while(l<=h)
    {
        int m = l+(h-l)/2;
        if(arr[m]>arr[m+1])
        return m;
        if(arr[m]>arr[n-1])
        l=m+1;
        else if(arr[m]<arr[n-1])
        h = m-1;
    }
    return -1;
}
int bsearch(vector<int> arr,int l,int r,int key)
{
    int m;
    while(l<=r)
    {
        m = l+(r-l)/2;
        if(arr[m]==key)
        return m;

        if(arr[m]>key)
        r = m-1;
        else
        l = m+1;
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
    int key;
    cin>>key;
    int pvt = pivot(arr,0,n-1);
    if(pvt==-1)
    cout<<bsearch(arr,0,n-1,key);
    else{
        int fs = bsearch(arr,0,pvt,key);
        if(fs==-1)
        {
            int ls = bsearch(arr,pvt+1,arr.size()-1,key);
            if(ls>-1)
            cout<<ls<<endl;
        }
        else
        cout<<fs<<endl;
    }
    return 0;
}