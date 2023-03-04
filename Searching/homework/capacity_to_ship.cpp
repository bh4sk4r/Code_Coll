#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool isPoss(vector<int>& a, int m,int days)
{
    int sum=0,cnt=1;
    for(int i=0;i<a.size();i++)
    {
        if(sum+a[i]<=m)
        sum+=a[i];

        else
        {
            sum=a[i];
            cnt++;
        }
    }
    return cnt<=days;
}

int sol(vector<int>& nums,int l, int h,int days)
{
    int m;
    while(l<=h)
    {
       m = l + (h - l) / 2;
       bool r = isPoss(nums,m,days);
       if(!r)
       l = m+1;
       else
       {
        bool r1 = isPoss(nums,m-1,days);
        if(!r1)
        return m;
        else
        h = m-1;
       }
    }
    return 0;
}
int main()
{
    fastio;
    int N,l=INT_MIN,h=0;
    cin>>N;
    vector<int> nums(N);
    for(int i=0;i<N;i++)
    {
        cin>>nums[i];
        if(nums[i]>l)
        l = nums[i];
        h+=nums[i];
    }
    int T;
    cin>>T;
    while(T--)
    {
        int days;
        cin>>days;
        cout<<sol(nums,l,h,days)<<endl;
    }
    return 0;
}