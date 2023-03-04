#include <bits/stdc++.h>
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    ll T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<ll> v1(N);
        for(ll i=0;i<N;i++)
        {
            cin>>v1[i];
        }
        sort(v1.begin(),v1.end());
        ll sub = LONG_MIN;
        for(ll i=1;i<N;i++)
        {
            sub = max(sub,v1[i]-v1[i-1]);
        }
        cout<<sub<<endl;
    }
    return 0;
}