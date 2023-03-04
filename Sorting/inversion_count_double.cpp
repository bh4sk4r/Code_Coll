#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int ctr=0;
void merge(vector<int>& arr,int s1,int e1,int s2,int e2, vector<int>& tmp)
{
    int k = s1, j = s2;
    for (; j <= e2; j++)
    {
        while (k <= e1 && arr[k] <= 2 * arr[j])
            k++;
        ctr += e1 - k + 1;
    }
    int i=s1,c=s1;
    j = s2;
    while (i <= e1 && j <= e2)
    {
        if(arr[i]<=arr[j])
        {
            tmp[c++] = arr[i++]; 
        }
        else
        {
            tmp[c++] = arr[j++];
        }
    }
    while (i <= e1)
        tmp[c++] = arr[i++];
    while (j <= e2)
        tmp[c++] = arr[j++];
    for (int k = s1; k <= e2; k++)
    {
        arr[k] = tmp[k];
    }
}
void double_inv(vector<int>& arr,int l,int h,vector<int>& tmp)
{
    if(l==h)
    return;
    int m;
    m = l+(h-l)/2;
    double_inv(arr,l,m,tmp);
    double_inv(arr,m+1,h,tmp);
    merge(arr,l,m,m+1,h,tmp);
}
int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> arr(n),tmp(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];

    double_inv(arr,0,n-1,tmp);
    cout<<ctr;
    return 0;
}