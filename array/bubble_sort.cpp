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
int flag=N,temp;
while(flag>1)
{
  for(int i=0;i<flag;i++)
  {
    if(arr[i]>arr[i+1])
    {
      temp = arr[i+1];
      arr[i+1] = arr[i];
      arr[i] = temp;
    }
  }
  flag--;
}
for(int i=0;i<N;i++)
cout<<arr[i]<<" ";

return 0;
}
