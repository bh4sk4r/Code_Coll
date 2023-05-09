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
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    unordered_map<int,int> m, visited;
    for(int i=0;i<n;i++)
    {
        m[arr[i]] = 1;
    }
    int len=0,ans=0,x;
    for(int i=0;i<n;i++)
    {
        if(m.find(arr[i]-1)!=m.end())
        continue;
        else if(visited.find(arr[i])==m.end())
        {
            visited[arr[i]] = 1;
            len=0;
            x = arr[i];
            while(m.find(x)!=m.end())
            {
                x++;
                len++;
            }
            ans = max(ans,len);
        }
    }
    cout<<ans;
    return 0;
}