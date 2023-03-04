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
for(int i=0;i<N-1;i++)
{
  int j = i+1;
  int temp;
  while(j>0)
  {
    if(arr[j]<arr[j-1])
    {
      temp = arr[j-1];
      arr[j-1] = arr[j];
      arr[j] = temp;
      j--;
    }
    else
    break;
  }
}
for(int i=0;i<N;i++)
cout<<arr[i]<<" ";
return 0;
}
