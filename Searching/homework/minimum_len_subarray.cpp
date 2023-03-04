#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool isPoss(vector<int>& nums, int target,int k)
{
    int sum=0, n = nums.size();
    for(int i=0;i<k;i++)
    {
        sum+=nums[i];
    }
    if(sum>=target)
    return true;
    for(int i=k;i<n;i++)
    {
        sum+=nums[i];
        sum-=nums[i-k];
        if(sum>=target)
        return true;
    }
    return false;
}

int sol(vector<int>& nums,int l,int h,int target)
{
    int m;
    while(l<=h)
    {
        m = l+(h-l)/2;
        bool r = isPoss(nums,target,m);
        if(!r)
        l = m+1;
        else
        {
            bool r1 = isPoss(nums,target,m-1);
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
    int N;
    cin>>N;
    vector<int> nums(N);
    for(int i=0;i<N;i++)
    cin>>nums[i];
    int T;
    cin>>T;
    int l=1,h = N;
    while(T--)
    {
        int target;
        cin>>target;
        cout<<sol(nums,l,h,target)<<endl;
    }
    return 0;
}