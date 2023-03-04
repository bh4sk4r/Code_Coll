#include <bits/stdc++.h>
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
ll eq(ll a,ll b,ll c,ll x)
{
    return a*x*x + b*x + c;
}
vector<ll> sol1(ll a,ll b,ll c,vector<ll>& arr,ll p1)
{
    vector<ll> ans;
    ll n = arr.size(),r1,r2;
    ll i=0,j = max(p1,n-1);
    while(i<p1 && j<n && j>=p1)
    {
        r1 = eq(a,b,c,arr[i]);
        r2 = eq(a,b,c,arr[j]);
        if(r1<=r2)
        {
            ans.push_back(r1);
            i++;
        }
        else
        {
            ans.push_back(r2);
            j--;
        }
    }
    while(i<p1)
    {
        ans.push_back(eq(a,b,c,arr[i]));
        i++;
    }
    while(j<n && j>=p1)
    {
        ans.push_back(eq(a,b,c,arr[j]));
        j--;
    }
    return ans;
}

vector<ll> sol2(ll a,ll b,ll c,vector<ll>& arr,ll p1)
{
    vector<ll> ans;
    ll j=p1,i = j-1,r1,r2;
    ll n = arr.size();
    while(i>=0 && j<n)
    {
       r1 = eq(a,b,c,arr[i]);
       r2 = eq(a,b,c,arr[j]);
       if(r1<=r2)
       {
        ans.push_back(r1);
        i--;
       }
       else
       {
        ans.push_back(r2);
        j++;
       }
    }
    while(i>=0)
    {
        r1 = eq(a,b,c,arr[i]);
        ans.push_back(r1);
        i--;
    }
    while(j<n)
    {
        r2 = eq(a,b,c,arr[j]);
        ans.push_back(r2);
        j++;
    }
    return ans;
}

int main()
{
    fastio;
    ll T;
    cin>>T;
    while(T--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll n;
        cin>>n;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++)
        cin>>arr[i];
        ll grad = -1*b/(2*a);
        ll p1 = upper_bound(arr.begin(),arr.end(),grad) - arr.begin();
        vector<ll> ans;
        if(a<0)
        ans = sol1(a,b,c,arr,p1);
        else
        ans = sol2(a,b,c,arr,p1);

        for(ll k=0;k<ans.size();k++)
        cout<<ans[k]<<" ";
        cout<<endl;        
    }
    return 0;
}