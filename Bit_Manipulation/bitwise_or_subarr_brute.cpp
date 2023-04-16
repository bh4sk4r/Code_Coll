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
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int tor=arr[i];
        for(int j=i;j<n;j++)
        {
            tor |= arr[j];
            ans+=tor;
        }
    }
    cout<<ans;
    return 0;
}