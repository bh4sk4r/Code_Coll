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

    sort(arr.begin(),arr.end());
    int ans = INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        ans = min(ans,arr[i]^arr[i+1]);
    }
    cout<<ans;
    return 0;
}