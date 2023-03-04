#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        int pre_max=INT_MIN,s=0,e=0,suff_min = INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            pre_max = max(pre_max,arr[i]);
            if(pre_max != arr[i])
            {
                s = i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            suff_min = min(suff_min,arr[i]);
            if(suff_min!=arr[i])
            {
                e = i;
                break;
            }
        }
        int minm = min(s, e), maxe = INT_MIN;
        int maxm = max(s, e), mine = INT_MAX;
        for (int i = minm; i <= maxm; i++)
        {
            if (arr[i] > maxe)
                maxe = arr[i];
            if (arr[i] < mine)
                mine = arr[i];
        }
        for(int i=0;i<s;i++)
        {
            if(arr[i]>mine)
            {
                s = i;
                break;
            }
        }
        
        for(int i=n-1;i>=e;i--)
        {
            if(arr[i]<maxe)
            {
                if(i==n-1)
                e = n-1;
                else
                e = i;
                break;
            }
        }
        cout<<s<<" "<<e<<endl;
    }
    return 0;
}