#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int N;
    cin>>N;
    vector<int> arr(N),rarr(N);
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<N;i++)
    {
        rarr[arr[i]] = i;
    }
    for(int i=0;i<N;i++)
    cout<<rarr[i]<<" ";
    return 0;
}