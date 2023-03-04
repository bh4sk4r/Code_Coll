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
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int rem[k]={0};
    for(int i=0;i<N;i++)
    {
        rem[arr[i]%k]++;
    }
    int ans=(rem[0]*(rem[0]-1))/2;
    for(int i=0;i<k/2;i++)
    {
        ans+=rem[i]*rem[k-i];
    }
    if(k%2==0)
    {
        ans+=(rem[k/2]*rem[k/2]-1)/2;
    }
    else
    ans+=rem[k/2]*rem[k/2+1];

    cout<<ans;
    return 0;
}