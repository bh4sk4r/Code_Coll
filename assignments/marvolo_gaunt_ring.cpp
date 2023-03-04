#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
	int n;
  long long p,q,r;
  cin>>n>>p>>q>>r;
	long long arr[n],pmax[n],smax[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	pmax[0] = p*arr[0];
	smax[n-1] = r*arr[n-1];
	for(int i=1;i<n;i++)
	{
		if(p*arr[i]>pmax[i-1])
			pmax[i] = p*arr[i];
		else
			pmax[i] = pmax[i-1];
	}
	for(int i=n-2;i>=0;i--)
	{
		if(r*arr[i]>smax[i+1])
			smax[i] = r*arr[i];
		else
			smax[i] = smax[i+1];
	}
	long long ans=INT_MIN,x;
	for(int j=0;j<n;j++)
	{
		x = pmax[j] + q*arr[j] + smax[j];
		if(ans>x)
			ans=x;
	}
	cout<<ans;
    return 0;
}
