#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
int arr[n][m];
int arrT[m][n];
for(int i=0;i<n;i++)
{
  for(int j=0;j<m;j++)
  {
    cin>>arr[i][j];
    arrT[j][i] = arr[i][j];
  }
}
for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
  {
    cout<<arrT[i][j]<<" ";
  }
  cout<<endl;
}
return 0;
}
