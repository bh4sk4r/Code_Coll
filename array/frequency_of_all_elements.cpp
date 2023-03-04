#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N;
cin>>N;
int arr[N],ctr[100]={0};
for(int i=0;i<N;i++)
{
  cin>>arr[i];
  ctr[arr[i]]++;
}
for(int i=0;i<N;i++)
{
  if(ctr[arr[i]]==0)
  continue;
  cout<<arr[i]<<"--> "<<ctr[arr[i]]<<endl;
  ctr[arr[i]]=0;
}
return 0;
}
