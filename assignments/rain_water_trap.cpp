#include <iostream>
using namespace std;
int main() {
    // your code goes here
	int n;
	cin>>n;
	long long arr[n],pmax[n],smax[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	pmax[0] = arr[0];
	smax[n-1] = arr[n-1];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>pmax[i-1])
			pmax[i] = arr[i];
		else
			pmax[i] = pmax[i-1];
	}
	for(int i=0;i<n;i++)
  {
    cout<<pmax[i]<<" ";
  }
  cout<<endl;
	for(int i=n-2;i>=0;i--)
	{
		if(arr[i]>smax[i+1])
			smax[i] = arr[i];
		else
			smax[i] = smax[i+1];
	}
	long long ans=0,max_ht;
	for(int j=1;j<n-1;j++)
	{
		if(pmax[j-1]>smax[j+1])
		{
			max_ht = smax[j+1];
		}
		else
			max_ht = pmax[j-1];
		if(max_ht>arr[j])
		{
			ans+=(max_ht-arr[j]);
		}
	}
	cout<<ans;

    return 0;
}
