#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll N;
cin>>N;
ll arr[N];
for(ll i=0;i<N;i++)
{
  cin>>arr[i];
}
ll gcd = arr[0];
for(int i=1;i<N;i++)
{
  ll maxm = max(gcd,arr[i]);
   minm = min(gcd,arr[i]);
  while(maxm%minm!=0)
  {
    ll temp = minm;
    minm = maxm%minm;
    maxm = temp;
  }
  gcd = minm;
}
cout<<gcd;
return 0;
}
