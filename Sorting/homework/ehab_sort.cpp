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
    ll n;
    cin>>n;
    int ec=0,oc=0;
    vector<ll> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        ec++;
        else
        oc++;
    }
    if(ec>0 && oc>0)
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
}