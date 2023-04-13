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
    int ans=arr[0];
    for(int i=1;i<n;i++)
    {
        ans = (ans^arr[i]);
    }
    cout<<ans;
    return 0;
}