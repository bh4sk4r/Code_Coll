#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int sing_el(vector<int>& arr, int l,int h)
{
    int m,n;
    n = arr.size();
    while(l<=h)
    {
        m = l+(h-l)/2;
        if(arr[0]!=arr[1])
        return 0;
        if(arr[n-1]!=arr[n-2])
        return n-1;
        if(arr[m]!=arr[m+1] && arr[m]!=arr[m-1])
        return m;

        if((arr[m]==arr[m-1] && m%2!=0) || (arr[m]==arr[m+1] && m%2==0))
        l = m+1;
        else if((arr[m]==arr[m-1] && m%2==0) || (arr[m]==arr[m+1] && m%2!=0))
        h = m-1;
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

    cout<<sing_el(arr,0,n-1);
    return 0;
}