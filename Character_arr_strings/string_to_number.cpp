#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
char c[100]="234";
int i=0,x=0;
while(c[i]!='\0')
{
  int b = c[i]-'0';
  x = x*10 + b;
  i++;
}
cout<<x;
return 0;
}
