#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int peak_element(vector<int> arr,int l,int h)
{
    int m,n = arr.size();
    while(l<=h)
    {
        m = l+(h-l)/2;
        if(m==0 && arr[m]>=arr[m+1])
        return m;
        if(m==n-1 && arr[m]>=arr[m-1])
        return m;
        if(arr[m]>=arr[m+1] && arr[m]>=arr[m-1])
        return m;
        if(arr[m]<=arr[m+1])
        l = m+1;
        else if(arr[m]<=arr[m-1])
        h = m-1;
    }
}
int main()
{
    fastio;
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    cout<<peak_element(arr,0,N-1);
    return 0;
}