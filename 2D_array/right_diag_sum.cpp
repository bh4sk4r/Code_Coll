#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n;
int arr[n][n];
for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {
    cin>>arr[i][j];
  }
}

int sum=0;
for(int i=0;i<n;i++)
{
  sum+=arr[i][n-1-i];
}
cout<<sum;
return 0;
}
