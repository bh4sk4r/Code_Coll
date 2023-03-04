#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int arr[n][n];
for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {
    cin>>arr[i][j];
  }
}
for(int i=0;i<n;i++)
{
  int k=0;
  while(k<i)
  {
    cout<<"  ";
    k++;
  }
  for(int j=i;j<n;j++)
  {
    cout<<arr[i][j]<<" ";
  }
  cout<<endl;
}
return 0;
}
