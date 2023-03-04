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
    vector<int> arr(n,0);    
    int q,a,b;
    cin>>q;
    while(q--)
    {
        cin>>a>>b;
        arr[b]++;
        if(a!=0)
        arr[a-1]--;
    }
    for(int i=n-2;i>=0;i--)
    {
        arr[i] = arr[i+1] + arr[i];
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
}