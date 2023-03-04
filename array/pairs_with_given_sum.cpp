#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N;
cin>>N;
int arr[N];
for(int i=0;i<N;i++)
{
  cin>>arr[i];
}
int sum_req,ctr=0;
cin>>sum_req;
for(int i=0;i<N-1;i++)
{
  for(int j=i+1;j<N;j++)
  {
    if(arr[i]+arr[j]==sum_req)
    ctr++;
  }
}
cout<<ctr;
return 0;
}
