#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll x,ll y)
{
	ll maxm = max(x,y);
	ll minm = min(x,y);
	while(maxm%minm!=0)
  {
    ll temp = minm;
    minm = maxm%minm;
    maxm = temp;
  }
  return minm;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll a,b,temp;
cin>>a>>b;

cout<<gcd(a,b);
return 0;
}
