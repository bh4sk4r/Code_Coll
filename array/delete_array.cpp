#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int sz,ind;
cin>>sz;
int arr[sz],arr2[sz-1];
for(int i=0;i<sz;i++)
{
  cin>>arr[i];
}
//delete
cin>>ind;
for(int i=0;i<ind;i++)
arr2[i]=arr[i];
for(int i=ind;i<sz-1;i++)
{
  arr2[i] = arr[i+1];
}
for(int i=0;i<sz-1;i++)
cout<<arr2[i]<<" ";
return 0;

}
