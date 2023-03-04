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
        int x,y,ans;
        cin>>x>>y;
        if(x%2==0)
        {
            ans = ceil(1.0*y/2) - x/2;
        }
        else
        {
            if(x==9)
            {
                ans = ceil(1.0*y/2) - 5;
            }
            else
            {
                ans = ceil(1.0*y/2) -x + 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}