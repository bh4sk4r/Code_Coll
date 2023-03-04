#include <bits/stdc++.h>
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    ll mod = pow(10,9)+7;
    fastio;
    int n,m;
    cin>>n>>m;
    vector<vector<ll>> arr(n,vector<ll>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    
    ll sum=0,prod1,prod2,prod3;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {

        prod1 = ((i%mod+1%mod)%mod*((j%mod+1%mod)%mod)%mod);
        prod2 = (prod1%mod * (m-j)%mod)%mod;
        prod3 = (prod2*((n-i)%mod * arr[i][j]%mod)%mod)%mod;
        sum = (sum%mod + prod3%mod)%mod;
        }
    }
    cout<<sum<<endl;
    return 0;
}