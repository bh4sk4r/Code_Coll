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
    int N,digits;
    ll M;
    cin>>N>>M;
    vector<ll> dig;
    for(int i=0;i<N;i++)
    {
        cin>>digits;
        dig.push_back(digits);
    }
    vector<int> Mdig;
    while(M!=0)
    {
        Mdig.push_back(M%10);
        M/=10;
    }
    reverse(Mdig.begin(),Mdig.end());
    int Mdig_len = Mdig.size();
    for(int i=0;i<Mdig_len;i++)
    cout<<Mdig[i]<<" ";
    ll ans=0,prod;
    for(int i=1;i<Mdig_len;i++)
    {
        ans+=pow(N,i);
    }
    ll diff = upper_bound(dig.begin(),dig.end(),Mdig[0])-dig.begin();
    cout<<diff<<endl;
    for(int i=dig[0];i<dig[diff];i++)
    {
        prod=1;
        for(int j=1;j<Mdig_len;j++)
        {
            ll cnt_less = upper_bound(dig.begin(),dig.end(),Mdig[j])-dig.begin();
            prod*=cnt_less;
        }
        ans+=prod;
    }
    
    cout<<ans<<endl;

    return 0;
}