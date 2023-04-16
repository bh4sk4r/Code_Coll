#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n,maxm = INT_MIN;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>maxm)
        maxm = arr[i];
    }
    int x = ceil(log2(maxm));
    int mask = (1<<x),ans=0;

    while(mask)
    {
        int set_count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]&mask)
            set_count++;
        }
        ans += (set_count*(n-set_count));
        mask >>= 1;
    }
    cout<<ans;
    return 0;
}