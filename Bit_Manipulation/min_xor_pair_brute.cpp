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
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int minm = INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            minm = min(minm, (arr[i]^arr[j]));
        }
    }
    cout<<minm;
    
    return 0;
}