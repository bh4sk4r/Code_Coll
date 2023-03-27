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
bool pair_diff(vector<int>& arr,int diff)
{
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        int x = bsearch(arr,0,n-1,diff+arr[i]);
        if(x!=-1 && x!=i)
        return true;
    }
    return false;
}
int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr.begin(),arr.end());
    int diff;
    cin>>diff;

    cout<<pair_diff(arr,diff);
    return 0;
}