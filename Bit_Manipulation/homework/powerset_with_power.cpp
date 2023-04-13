#include <bits/stdc++.h>
#define ll long long

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

ll mod = pow(10,9)+7;
bool is_power2(int x)
{
    return (x&(x-1))==0;
}
int main()
{
    fastio;
    int n;
    cin>>n;
    ll ans,ctr=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(is_power2(arr[i]))
        ctr++;
    }

    ctr = (1LL<<ctr);

    ans = (ctr%mod - 1%mod)%mod;
    cout<<ans;
    return 0;
}