#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> arr(n);
    unordered_map<int,int> m;
    int ls,rs,cstreak,ans=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ls=0;rs=0;cstreak = 0;
        if(m.find(arr[i]) != m.end())
        continue;

        if(m.find(arr[i]-1) != m.end())
        ls = m[arr[i]-1];

        if (m.find(arr[i] + 1) != m.end())
        rs = m[arr[i]+1];

        cstreak = (ls+rs+1);
        m[arr[i]] = cstreak;
        m[arr[i]-ls] = cstreak;
        m[arr[i]+rs] = cstreak;

        ans = max(ans,cstreak);
    }
    cout<<ans<<endl;
    return 0;
}