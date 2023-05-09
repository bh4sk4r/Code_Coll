#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n,q;
    cin>>n>>q;
    unordered_map<int,int> m;
    while(q--)
    {
        int event;
        cin>>event;
        if(event==1)
        {
            int x;
            cin>>x;
            m[x]++;
        }
    }
    return 0;
}