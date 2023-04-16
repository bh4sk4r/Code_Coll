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
    ll n,maxm = LONG_LONG_MIN;
    cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        maxm = max(maxm,arr[i]);
    }
    ll ans=0;
    ll x = ceil(log2(maxm));
    ll mask = (1<<x);
    while(mask)
    {
        ll i=0,j=0;
        while(j<n)
        {
            if(mask&arr[j])
            {
                ans += (j-i+1)*(n-j)*mask;
                j++;
                i=j;
            }
            else
            j++;
        }
        mask >>= 1;
    }
    cout<<ans;
    return 0;
}