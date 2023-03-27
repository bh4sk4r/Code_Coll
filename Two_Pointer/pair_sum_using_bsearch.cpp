#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int bsearch(vector<int>& arr,int l,int h,int target)
{
    int m;
    while(l<=h)
    {
        m = l+(h-l)/2;
        if(arr[m]==target)
        return m;
        else
        {
            if(arr[m]<target)
            l = m+1;
            else
            h = m-1;
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
    int sum,flag=0;
    cin>>sum;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        int l = i+1,h = n-1;
        int x = bsearch(arr,l,h,sum-arr[i]);
        if(x>=0)
        {
            cout<<"true";
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"false";
    return 0;
}