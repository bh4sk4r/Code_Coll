#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
char s1[100] = "abcbdabac";
char s2[100] = "bda";
int i=0,flag;
while(s1[i]!='\0')
{
  int j=0,k=i;
  flag=0;
  if(s1[k]==s2[j])
  {
    while(s2[j]!='\0')
    {
      if(s2[j]!=s1[k])
      break;
      j++;
      k++;
    }
    if(s2[j]=='\0')
    cout<<"Yes";
  }
  if(flag==1)
  break;
  i++;
}
if(flag=0)
cout<<"No";
return 0;
}
