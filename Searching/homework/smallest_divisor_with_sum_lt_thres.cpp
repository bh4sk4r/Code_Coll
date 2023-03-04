#include <bits/stdc++.h>
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

ll find_sum(vector<int>& arr, int m)
{
    ll sum=0;
    int div=1;
    for(int i=0;i<arr.size();i++)
    {
        div = ceil(arr[i]/(float)m);
        sum+=div;
    }
    return sum;
}

int sol(vector<int>& arr,int l,int h,int thres)
{
    int m;
    while(l<=h)
    {
        m = l+(h-l)/2;
        ll s = find_sum(arr,m);
        if(s>thres)
        l = m+1;
        else
        {
            ll s1 = find_sum(arr,m-1);
            if(s1>thres)
            return m;
            else
            h = m-1;
        }
    }
}
int main()
{
    fastio;
    // code goes here
    int N,maxm=INT_MAX;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
        if(arr[i]>maxm)
        maxm = arr[i];
    }
    int l=1, h = maxm;
    int thres;
    cin>>thres;

    cout<<sol(arr,l,h,thres)<<endl;

    return 0;
}