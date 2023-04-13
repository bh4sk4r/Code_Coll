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

    int j = ceil(log2(maxm));
    int mask = (1<<j),ans=0;

    while(mask)
    {
        int cnt_set=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]&mask)
            cnt_set++;
        }
        ans += (cnt_set%3)*mask;
        mask >>= 1;
    }
    cout<<ans;
    return 0;
}