#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool isValid(vector<int>& arr,int n,int k)
{
    int s = arr.size();
    int diff = arr[n-1];

    if(diff >= k)
    return true;

    for(int i=n;i<s;i++)
    {
        diff = arr[i]-arr[i-n];
        if(diff>=k)
        return true;
    }

    return false;
}

int bsearch(vector<int>& arr,int k,int l,int h)
{
    int m;
    while(l<=h)
    {
        m = l+(h-l)/2;
        bool r  = isValid(arr,m,k);
        if(!r)
        l = m+1;
        else
        {
            if(m==1)
            return m;
            bool r1 = isValid(arr,m-1,k);
            if(!r1)
            return m;
            else
            h = m-1;
        }
    }
    return -1;
}
int main()
{
    fastio;
    int N,k;
    cin>>N>>k;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    cin>>arr[i];

    vector<int> pref_sum(N);
    pref_sum[0] = arr[0];
    for(int i=1;i<N;i++)
    {
        pref_sum[i] = pref_sum[i-1]+arr[i];
    }
    int ans = bsearch(pref_sum,k,1,N);
    cout<<ans<<endl;
    return 0;
}