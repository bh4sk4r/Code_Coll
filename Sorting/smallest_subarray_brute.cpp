#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int N,k;
    cin>>N>>k;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    cin>>arr[i];
    int ans=INT_MAX,sum;
    for(int i=0;i<N;i++)
    {
        sum=0;
        for(int j=i;j<N;j++)
        {
            sum+=arr[j];
            if(sum>=k)
            {
                ans = min(ans,j-i+1);
                break;
            }
        }
    }
    if(ans!=INT_MAX)
    cout<<ans<<endl;
    else
    cout<<"0"<<endl;
    return 0;
}