#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N,ctr=0;
cin>>N;
int arr[N];
for(int i=0;i<N;i++)
{
  cin>>arr[i];
}
int sum;
cin>>sum;
for(int i=0;i<N-2;i++)
{
  for(int j=i+1;j<N;j++)
  {
    for(int k=j+1;k<N;k++)
    {
      if(arr[i]+arr[j]+arr[k]==sum)
      cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
    }
  }
}
cout<<ctr;
return 0;
}
