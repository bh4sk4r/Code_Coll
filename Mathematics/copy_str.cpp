#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
char s1[100];
char s2[100];
cin>>s1;
int i=0;
while(s1[i]!='\0')
{
  s2[i] = s1[i];
  i++;
}
s2[i] = '\0';
cout<<s2;
return 0;
}
