#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
vector<vector<int>> ans;
void comb(vector<int>& aux,int i,vector<int>& arr,int k,int N)
{
    if(k==0)
    {
        ans.push_back(aux);
        return;
    }
    if(i==N)
    return;
    comb(aux,i+1,arr,k,N);
    aux.push_back(arr[i]);
    comb(aux,i+1,arr,k-1,N);
    aux.pop_back();
}

int main()
{
    fastio;
    int N;
    cin>>N;
    int k;
    cin>>k;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    vector<int> aux;
    comb(aux,0,arr,k,N);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<k;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}