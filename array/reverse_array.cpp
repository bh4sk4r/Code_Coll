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
cin>>arr[i];
int temp;
for(int i=0;i<N/2;i++)
{
  temp = arr[i];
  arr[i] = arr[N-i-1];
  arr[N-i-1] = temp;
}
for(int i=0;i<N;i++)
cout<<arr[i]<<" ";
return 0;
}
