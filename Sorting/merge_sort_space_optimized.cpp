#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void merge(int l,int h,int m,vector<int>& arr,vector<int>& temp)
{
    int i=l,j=m+1,c=l;
    while(i<=m && j<=h)
    {
        if(arr[i]<=arr[j])
        {
            temp[c++] = arr[i++];
        }
        else
        temp[c++] = arr[j++];
    }
    while(i<=m)
    temp[c++] = arr[i++];
    while(j<=h)
    temp[c++] = arr[j++];

    for(int k=l;k<=h;k++)
    arr[k] = temp[k];
}

void merge_sort(int l,int h,vector<int>& arr,vector<int>& temp)
{
    if(l==h)
    return;

    int m = l+(h-l)/2;
    merge_sort(l,m,arr,temp);
    merge_sort(m+1,h,arr,temp);

    merge(l,h,m,arr,temp);
}

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> arr(n),temp(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];

    merge_sort(0,n-1,arr,temp);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
}