#include <iostream>
using namespace std;
int main() {
    // your code goes here
	int N = 1000000;
	int arr[N+1]={0};
	for(int i=2;i*i<=N;i++)
	{
		if(arr[i]==0)
		{
		for(int j=i;i*j<=N;j++)
		{
			arr[i*j]==1;
		}
		}
	}
  for(int i=2;i<=N;i++)
  {
    if(arr[i]==0)
    cout<<arr[i]<<"->"<<i;
  }
	int prime_count[N+1]={0};
	for(int i=2;i<=N;i++)
	{
		if(arr[i]==0)
			prime_count[i] = prime_count[i-1]+1;
		else
			prime_count[i] = prime_count[i-1];
	}
	/*int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		cout<<prime_count[n]<<endl;
	}
*/

}
