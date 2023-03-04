#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N;
cin>>N;
int arr[N+2];
for(int i=0;i<N+2;i++)
{
  arr[i]=1;
}
for(int i=2;i*i<=N+1;i++)
{
  if(arr[i]==1)
  {
    for(int j=i;i*j<=N+1;j++)
    {
      arr[i*j]=2;
    }
  }
}
cout<<"2"<<endl;
for(int i=2;i<=N+1;i++)
cout<<arr[i]<<" ";
return 0;
}
