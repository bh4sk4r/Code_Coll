#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> arr(n);
    unordered_map<int,int> m;
    int minm = INT_MAX,maxm = INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]=1;
        if(minm>arr[i])
        minm = arr[i];
        if(maxm<arr[i])
        maxm = arr[i];
    }
    int ans=0,ctr=0;
    for(int i=minm;i<=maxm;i++)
    {
        if(m.find(i)!=m.end())
        ctr++;
        else
        ctr=0;
        ans = max(ans,ctr);
    }
    cout<<ans;
    return 0;
}