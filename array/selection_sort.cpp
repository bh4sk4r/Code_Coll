#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N,min_index;
cin>>N;
int arr[N];
for(int i=0;i<N;i++)
{
  cin>>arr[i];
}
for(int i=0;i<N-1;i++)
{
  int minm = INT_MAX;
  for(int j=i+1;j<N;j++)
  {
    if(arr[j]<minm)
    {
      minm=arr[j];
      min_index=j;
    }
  }
  if(arr[i]>minm)
  {
    arr[min_index] = arr[i];
    arr[i] = minm;
  }
}
for(int i=0;i<N;i++)
cout<<arr[i]<<" ";
return 0;
}
