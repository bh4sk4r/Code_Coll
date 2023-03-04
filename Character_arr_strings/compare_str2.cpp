#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
char s1[100];
char s2[100];
cin>>s1;
cin>>s2;
int i=0;
while(s1[i]!='\0' && s2[i]!='\0')
{
  if(s1[i]!=s2[i])
  break;

  i++;
}
if(s1[i]=='\0' && s2[i]=='\0')
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
return 0;
}
