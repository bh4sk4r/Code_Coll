#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int subsum(vector<int>& arr,int sum,int i,int& r,int n)
{
    if (sum == r)
        return 1;
        
    if(i==n)
    return 0;

   return (subsum(arr, sum + arr[i], i + 1, r, n) + subsum(arr, sum, i + 1, r, n));
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
    int r;
    cin>>r;
    cout<<subsum(arr,0,0,r,N);
    return 0;
}