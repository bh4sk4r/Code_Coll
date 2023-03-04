#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N,x,ctr=0;
cin>>N>>x;
int arr[N];
for(int i=0;i<N;i++)
{
  cin>>arr[i];
  if(arr[i]==x)
  ctr++;
}
cout<<ctr;
return 0;
}
