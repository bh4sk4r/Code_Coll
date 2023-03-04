#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N;
cin>>N;
for(int i=2;i*i<=N;i++)
{
  while(N%i==0)
  {
    cout<<i<<" ";
    N/=i;
  }
}
if(N!=1)
cout<<N;
return 0;
}
