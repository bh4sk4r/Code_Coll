#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N;
cin>>N;
int arr[N+1]={1},spf[N+1]={-1};
arr[1]=0;
for(int i=2;i*i<=N;i++)
{
  if(arr[i]==1)
  {
    for(int j=i;i*j<=N;j++)
    {
      if(arr[i*j]==1)
      {
      arr[i*j]=0;
      spf[i*j] = i;
      }
    }
  }
}

while(spf[N]!=-1)
{
  cout<<spf[N];
  N = N/spf[N];
}
if(N!=1)
cout<<N;

return 0;
}
