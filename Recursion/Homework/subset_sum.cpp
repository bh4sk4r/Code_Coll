#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
vector<int> ans;
void ssum(vector<int>& arr,int sum,int i)
{
    if(i==arr.size())
    {
        ans.push_back(sum);
        return;
    }
    ssum(arr,sum+arr[i],i+1);
    ssum(arr,sum,i+1);
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
    ssum(arr,0,0);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    return 0;
}