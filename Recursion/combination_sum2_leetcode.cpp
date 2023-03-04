#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
vector<vector<int>> ans;
void csum(vector<int>& aux,int target,int i,vector<int>& arr)
{
    if(target==0)
    {
        ans.push_back(aux);
        return;
    }
    if(target<0)
    return;
    if(i==arr.size())
    return;

    csum(aux,target,i+1,arr);
    aux.push_back(arr[i]);
    csum(aux,target-arr[i],i,arr);
    aux.pop_back();
}
int main()
{
    fastio;
    int N;
    cin>>N;

    vector<int> arr(N);
    for(int i=0;i<N;i++)
    cin>>arr[i];
    int target;
    cin>>target;
    vector<int> aux;
    csum(aux,target,0,arr);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}