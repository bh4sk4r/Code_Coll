#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
char arr[100];
cin>>arr;
int len=0;
for(int i=0;arr[i]!='\0';i++)
len++;
for(int i=len-1;i>=0;i--)
{
cout<<arr[i];
}
return 0;
}
