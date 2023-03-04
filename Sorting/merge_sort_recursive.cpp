#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
vector<int> merge(vector<int> arr1, vector<int> arr2)
{
    vector<int> ans;
    int n = arr1.size(),m = arr2.size();
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(arr1[i]<=arr2[j])
            ans.push_back(arr1[i++]);
        else
            ans.push_back(arr2[j++]);
    }
    while(i<n)
    {
        ans.push_back(arr1[i++]);
    }
    while(j<m)
    {
        ans.push_back(arr2[j++]);
    }
    return ans;
}

vector<int> merge_sort(vector<int>& arr,int l,int h)
{
    vector<int> ans,t1,t2;
    if(l==h)
    {
        ans.push_back(arr[l]);
        return ans;
    }
    int m;
    m = l+(h-l)/2;
    t1 = merge_sort(arr,l,m);
    t2 = merge_sort(arr,m+1,h);
    ans = merge(t1,t2);

    return ans;
}

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];

    vector<int> ans;
    ans = merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    
    return 0;
}