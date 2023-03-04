#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int rsearch(vector<int>& pre_sum,vector<int>& arr,int l,int h, int i)
{
    int m,n = pre_sum.size();
    while(l<=h)
    {
        m = l+(h-l)/2;
        int s1 = pre_sum[m-1]-pre_sum[i];
        if(arr[i] >= s1)
        l = m+1;
        else
        {
            if(m==n-1)
            return m;

            int s2 = pre_sum[m-2]-pre_sum[i];
            if(arr[i] >= s2)
            return m;
            else
            h = m-1;
        }
    }
    return l;
}
int lsearch(vector<int>& pre_sum,vector<int>& arr,int l,int h, int i)
{
    int m,n = pre_sum.size();
    while(l<=h)
    {
        m = l+(h-l)/2;
        int s1 = pre_sum[i-1] - pre_sum[m];
        if(arr[i]>=s1)
        h = m-1;
        else
        {
            if(m==0)
            return m;
            int s2 = pre_sum[i-1]-pre_sum[m-1];
            if(arr[i]>=s2)
            return m;
            else
            l = m+1;
        }
    }
    return h;
}
int main()
{
    fastio;
    int T;
    cin>>T;
    while(T--)
    {
        int n,l,h,idx;
        cin>>n;
        vector<int> arr(n),ans(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int> pre_sum(n);
        pre_sum[0] = arr[0];
        for(int i=1;i<n;i++)
        {
            pre_sum[i] = pre_sum[i-1] + arr[i];
        }
        int i=0;
        l = i+1;
        h = n-1;
        idx = rsearch(pre_sum,arr,l,h,i)-1;
        ans[idx]++;
        for(i=1;i<n-1;i++)
        {
            l = i+1;h = n-1;
            idx = rsearch(pre_sum,arr,l,h,i)-1;
            ans[idx]++;
            ans[i]--;

            l = 0; h = i-1;
            idx = lsearch(pre_sum,arr,l,h,i)+1;
            if(idx!=0)
            ans[idx-1]--;
            ans[i-1]++;
        }
        i = n-1;
        l = 0;h = i-1;
        idx = lsearch(pre_sum,arr,l,h,i);
        ans[idx]++;

        for(i=n-2;i>=0;i--)
        {
            ans[i] += ans[i+1];
        }
        for(int j=0;j<n;j++)
        {
            cout<<ans[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}