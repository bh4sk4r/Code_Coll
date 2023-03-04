#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int ctr=0;
void merge(vector<int>& arr,int s1,int e1, int s2, int e2, vector<int>& tmp)
{
    int i=s1,j=s2,c=s1;
    while(i<=e1 && j<=e2)
    {
        if(arr[i]<=arr[j])
        {
            tmp[c++] = arr[i++];
        }
        else
        {
            ctr += (e1-i+1);
            tmp[c++] = arr[j++];
        }
    }
    while(i<=e1)
    tmp[c++] = arr[i++];
    while(j<=e2)
    tmp[c++] = arr[j++];
    for(int k=s1;k<=e2;k++)
    {
        arr[k] = tmp[k];
    }

}
void inversion_count(vector<int>& arr,int l,int h,vector<int>& tmp)
{
    if(l==h)
    return;
    int m = l+(h-l)/2;
    inversion_count(arr,l,m,tmp);
    inversion_count(arr,m+1,h,tmp);
    merge(arr,l,m,m+1,h,tmp);
}
int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<int> tmp(n);
    inversion_count(arr,0,n-1,tmp);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    cout<<ctr<<endl;
    return 0;
}