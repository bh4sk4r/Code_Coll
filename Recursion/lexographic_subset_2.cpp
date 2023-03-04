#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void lxss(vector<int>& aux,int i,vector<int>& arr,int& N)
{
    for(int k=0;k<i;k++)
    cout<<aux[k]<<" ";
    cout<<endl;
    if(i==N-1)
    return;
    for(int j=i;j<N;j++)
    {
        aux.push_back(arr[j]);
        lxss(aux,j+1,arr,N);
        aux.pop_back();
    }
}
int main()
{
    fastio;
    int N;
    cin>>N;
    vector<int> aux,arr(N);
    for(int i=0;i<N;i++)
    cin>>arr[i];
    sort(arr.begin(),arr.end());
    lxss(aux,0,arr,N);
    return 0;
}