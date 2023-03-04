#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void lexicss(vector<int>& aux,int sz,int i,vector<int>& arr,int N)
{
    for(int k=0;k<sz;k++)
    cout<<aux[k];
    cout<<endl;
    if(i==N)
    return;
    for(int j=i;j<N;j++)
    {
        aux[sz] = arr[j];
        lexicss(aux,sz+1,j+1,arr,N);
    }
}
int main()
{
    fastio;
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    cin>>arr[i];
    sort(arr.begin(),arr.end());
    vector<int> aux(N);
    lexicss(aux,0,0,arr,N);
    return 0;
}