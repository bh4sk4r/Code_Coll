#include <bits/stdc++.h>
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool isPoss(vector<ll>& arr,ll k,ll m)
{
    ll sum=0,ctr=0;
    ll i=0;
    while(sum<=k && i<arr.size())
    {
        sum+=arr[i];
        if(sum<=k)
        ctr++;
        i++;
    }
    return ctr>=m;
}

ll sol(vector<ll>& arr, ll k,ll l,ll h)
{
    ll m;
    while(l<=h)
    {
        m = l+(h-l)/2;
        bool r = isPoss(arr,k,m);
        if(!r)
        h = m-1;
        else
        {
            bool r1 = isPoss(arr,k,m+1);
            if(!r1)
            return m;
            else
            l = m+1; 
        }
    }
    return 0;
}

int main()
{
    fastio;
    ll T;
    cin>>T;
    while(T--)
    {
        ll n,k,min_q = LONG_LONG_MAX,idx;
        cin>>n>>k;
        vector<ll> ques(n),rest(n),total(n);
        for(ll i=0;i<n;i++)
        {
            cin>>ques[i];
            if(ques[i]<min_q)
            {
                min_q = ques[i];
                idx = i;
            }
        }
        
        for(ll i = 0; i < n; i++)
        {
            cin >> rest[i];
        }
        swap(ques[0], ques[idx]);
        swap(rest[0], rest[idx]);
        total[0] = ques[0];
        for(ll i=1;i<n;i++)
        {
            total[i] = ques[i] + rest[i];
        }
        sort(total.begin(),total.end());
        ll l = 1;
        ll h = n;
        cout<<sol(total,k,1,h)<<endl;
    }
    return 0;
}