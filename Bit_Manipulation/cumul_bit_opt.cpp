#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int l,r;
    cin>>l>>r;
    int i=0,num=r;
    while((num>>1))
    {
        num>>=1;
        i++;
    }
    int mask = (1<<i);
    //cout<<mask<<endl;
    int ans=0;
    int res_l = (l&mask);
    int res_r = (r&mask);
    //cout<<res_l<<" "<<res_r<<endl;
    while(i!=0 && (res_l==res_r))
    {
        ans += res_l;
        mask>>=1;
        i--;
        res_l = (l&mask);
        res_r = (r&mask);
        //cout<<i<<" "<<mask<<" "<<res_l<<" "<<res_r<<" "<<ans<<endl;
    }
    cout<<ans;
    return 0;
}