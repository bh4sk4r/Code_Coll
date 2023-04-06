#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int i,j,k,n;
    cin>>i>>j>>k>>n;
    int pi=0,pj=0,pk=0;
    vector<int> arr;
    arr.push_back(1);
    int ctr=0;
    while(ctr<n)
    {
        int minm = min(arr[pi]*i, min(arr[pj]*j, arr[pk]*k));
        arr.push_back(minm);
        
        if(arr[pi]*i==minm)
        pi++;
        if(arr[pj]*j==minm)
        pj++;
        if(arr[pk]*k==minm)
        pk++;

        ctr++;
    }
    cout<<arr[ctr-1];
    //for(int i=0;i<arr.size();i++)
    //cout<<arr[i]<<" ";
    return 0;
}