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
    vector<int> arr(N),odd_arr,even_arr;
    for(int i=0;i<N;i++)
    cin>>arr[i];

    for(int i=1;i<N;i+=2)
    odd_arr.push_back(arr[i]);

    for(int i=0;i<N;i+=2)
    even_arr.push_back(arr[i]);

    sort(odd_arr.begin(),odd_arr.end());
    sort(even_arr.begin(),even_arr.end());
    int j=0;
    for(int i=0;i<N;i+=2,j++)
    arr[i] = even_arr[j];
    

    j=0;
    for(int i=1;i<N;i+=2,j++)
    {
        arr[i] = odd_arr[j];
    }

    for(int i=0;i<N;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    int k=0,flag=1;
    while(k<N-1)
    {
        if(arr[k]>arr[k+1])
        {
            flag=0;
        }
        k++;
    }
    if(!flag)
    cout<<k-1<<endl;
    return 0;
}