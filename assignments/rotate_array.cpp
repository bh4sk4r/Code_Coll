#include <iostream>
using namespace std;
int main() {
    // your code goes here
	int N,K;
	cin>>N>>K;
	long long arr[N];
	for(int i=0;i<N;i++)
		cin>>arr[i];
	int temp;
	for(int i=0;i<N/2;i++)
	{
  	temp = arr[i];
  	arr[i] = arr[N-i-1];
  	arr[N-i-1] = temp;
	}

	for(int i=0;i<K/2;i++)
	{
  	temp = arr[i];
  	arr[i] = arr[K-i-1];
  	arr[K-i-1] = temp;
	}


	for(int i=0;i<(N-K)/2;i++)
	{
  	temp = arr[K+i];
  	arr[K+i] = arr[N-i-1];
  	arr[N-i-1] = temp;
	}
	for(int i=0;i<N;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;

}
