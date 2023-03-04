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
int i=0;
while(i<n)
{
  int j=0;
  while(j<=i)
  {
    cout<<arr[i][j]<<" ";
    j++;
  }
  cout<<endl;
  i++;
}
return 0;
}
