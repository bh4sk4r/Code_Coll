#include <iostream>
using namespace std;
int main() {
    // your code goes here
	int N=1000000;
	 primes[N+1],spf[N+1];
	for(int i=0;i<N+1;i++)
	{
		primes[i] = 1;
		spf[i] = -1;
	}
	for(int i=2;i*i<=N;i++)
	{
		if(primes[i]==1)
		{
			for(int j=i;j*i<=N;j++)
			{
				if(primes[i*j]==1)
				{
					spf[i*j]=i;
					primes[i*j] = 0;
				}
			}
		}
	}
	int T;
	cin>>T;
	while(T--)
	{
		int n1,prev_value,ctr=0;
		cin>>n1;
		prev_value = spf[n1];
		while(spf[n1]!=-1)
		{
			if(prev_value==spf[n1])
				ctr++;
			else
			{
				cout<<prev_value<<" "<<ctr<<endl;
				prev_value = spf[n1];
				ctr=1;
			}
			n1/=spf[n1];
		}
		if(n1!=1)
			cout<<n1<<" "<<"1"<<endl;
	}
    return 0;
}
