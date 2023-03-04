#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int maxm(vector<int>& arr,int start, int end)
{
    if(start==end)
    return arr[start];
    int mid = (start+end)/2;
    return max(maxm(arr,start,mid),maxm(arr,mid+1,end));
}
int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<maxm(arr,0,n-1);
    return 0;
}