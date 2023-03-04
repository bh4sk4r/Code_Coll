#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int N,maxm=INT_MIN,minm = INT_MAX;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
        if(arr[i]>maxm)
        maxm = arr[i];

        if(arr[i]<minm)
        minm = arr[i];
    }

    cout<<maxm-minm<<endl;
    
    return 0;
}