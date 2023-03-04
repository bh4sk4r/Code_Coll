#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll mod = pow(10, 9) + 7;
ll lcm(ll a, ll b)
{
    ll minm = min(a, b);
    ll maxm = max(a, b);
    while(maxm%minm!=0)
    {
        ll temp = minm;
        minm = maxm%minm;
        maxm = temp;
    }
    ll ans = a*b/minm;
    return ans;
}
ll magical(ll n, ll a, ll b)
{
    ll ans = n / a + n / b - n / lcm(a, b);
    return ans;
}
ll bfunc(ll l, ll h, ll k, ll a, ll b)
{
    ll m, ctr;
    while (l <= h)
    {
        m = l + (h - l) / 2;
        ctr = magical(m, a, b);
        if (ctr < k)
            l = m + 1;

        else
        {
            if (magical(m - 1,a,b) < k)
                return m;
            else
                h = m - 1;
        }
    }
    return -1;
}
int main()
{
    // your code goes here
    ll T;
    cin >> T;
    while (T--)
    {
        ll N, a, b;
        cin >> N;
        cin >> a >> b;

        ll maxm = max(a, b);
        ll minm = min(a, b);

        ll low_cm = lcm(a,b);
        low_cm *= N;
        ll ans = bfunc(minm,low_cm,N,a,b);
        cout<<ans%mod<<endl;
    }

    return 0;
}