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
int suml=0,sumr=0,sum=0;
//left diagonal
for(int i=0;i<n;i++)
{
  suml+=arr[i][i];
}
for(int i=0;i<n;i++)
{
  sumr+=arr[i][n-1-i];
}
if(n%2==0)
{
  sum = suml+sumr;
}
else
sum = suml+sumr-arr[n/2][n/2];

cout<<sum;
return 0;
}
