#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
char s1[100] = "abcbdabac";
char s2[100] = "bda";
int l1,l2,i=0;
while(s1[i]!='\0')
{
  l1++;
  i++;
}
i=0;
while(s2[i]!='\0')
{
  l2++;
  i++;
}
int match=0;
for(i=0;i<=l1-l2;i++)
{
  match=1;
  for(int j=i;j<i+l2-1;j++)
  {
    if(s1[j]!=s2[j-i])
    {
      match=0;
      break;
    }
  }
  if(match==1)
  break;
}
return 0;
}
