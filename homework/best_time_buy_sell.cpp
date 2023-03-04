#include <iostream>
using namespace std;
int main() {
    // your code goes here
	int N;
	cin>>N;
	int arr[N],pmin[N],profit=0;
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	pmin[N-1] = arr[N-1];
	for(int i=N-2;i>=0;i--)
	{
		if(arr[i]>pmin[i+1])
			pmin[i] = arr[i];
		else
			pmin[i] = pmin[i+1];
	}
	for(int i=0;i<N-1;i++)
	{
		int temp = pmin[i]-arr[i];
		if(temp>profit)
			profit = temp;
	}
	cout<<profit;

    return 0;
}
