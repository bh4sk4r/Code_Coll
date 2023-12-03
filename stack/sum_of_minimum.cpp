#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    fastio;
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    vector<ll> nse(n),pse(n);
    stack<ll> st;
    st.push(0);
    for(ll i=1;i<n;i++)
    {
        while(!st.empty() && arr[st.top()]>arr[i])
        {
            nse[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        nse[st.top()] = n;
        st.pop();
    }

    st.push(n-1);
    for(ll i=n-2;i>=0;i--)
    {
        while(!st.empty() && arr[st.top()]>=arr[i])
        {
            pse[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        pse[st.top()] = -1;
        st.pop();
    }
    ll x;
    for(ll i=0;i<n;i++)
    {
        
    }

    return 0;
}