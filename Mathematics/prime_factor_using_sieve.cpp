#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N;
cin>>N;
int arr[N+1]={0};
int primes[N];
for(int j=2;j*j<=N;j++)
{
  if(arr[j]==1)
  continue;
  for(int i=j;i<=(N/j);i++)
  {
    arr[j*i] = 1;
  }
}
int j=0;
for(int i=2;i<N+1;i++)
{
  if(arr[i]==0)
  primes[j] = i;
  j++;
}
j=0;
while(N!=1)
{
  if(arr[N]==0)
  {
    cout<<N;
    N=1;
  }
  if(N%primes[j]==0)
  {
    cout<<primes[j]<<" ";
    N/=primes[j];
  }
  else
  {
    j++;
  }
}
return 0;
}
