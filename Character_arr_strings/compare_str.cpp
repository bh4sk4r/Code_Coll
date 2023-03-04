#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
char c1[100];
cin>>c1;
char c2[100];
cin>>c2;
int l1=0,l2=0;
for(int i=0;c1[i]!='\0';i++)
{
  l1++;
}
for(int i=0;c2[i]!='\0';i++)
{
  l2++;
}
int flag=0;
if(l1!=l2)
{
  flag=1;
}
else
{
  for(int i=0;c1[i]!='\0';i++)
  {
    if(c1[i]!=c2[i])
    {
      flag=1;
      cout<<"No";
      break;
    }
  }
}
if(flag==0)
cout<<"Yes";

return 0;
}
