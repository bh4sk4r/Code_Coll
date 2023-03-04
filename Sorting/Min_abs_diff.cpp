#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    // code goes here
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    cin>>arr[i];
    int ans = INT_MAX,pre_diff,post_diff,min_diff;
    sort(arr.begin(),arr.end());
    for(int i=1;i<N-1;i++)
    {
        pre_diff = abs(arr[i]-arr[i-1]);
        post_diff = abs(arr[i]-arr[i+1]);
        min_diff = min(pre_diff,post_diff);
        if(min_diff<ans)
        ans = min_diff;
    }
    cout<<ans<<endl;
    return 0;
}