#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
vector<vector<int>> ans;
void csum(vector<int>& aux,int n,int k,int i,vector<int>& arr)
{
    if(n==0 && k==0)
    {
        ans.push_back(aux);
        return;
    }
    if(n<=0)
    return;
    
    if(i==9)
    return;

    csum(aux,n,k,i+1,arr);
    aux.push_back(arr[i]);
    csum(aux,n-arr[i],k-1,i+1,arr);
    aux.pop_back();

}
int main()
{
    fastio;
    vector<int> arr(9);
    for(int i=0;i<9;i++)
    arr[i] = i+1;

    int k;
    cin >> k;
    
    int sum;
    cin>>sum;

    vector<int> aux;
    csum(aux,sum,k,0,arr);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<k;j++)
        cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}