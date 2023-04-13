#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int l,r,ans=r;
    cin>>l>>r;
    for(int i=l;i<r;i++)
    {
        ans = (ans&i);
    }
    cout<<ans;
    return 0;
}