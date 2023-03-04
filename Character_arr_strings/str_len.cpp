#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
char names[100][100];
for(int i=0;i<5;i++)
{
  cin>>names[i];
}
for(int i=0;i<5;i++)
{
  int j=0,len=0;
  while(names[i][j]!='\0')
  {
    len++;
    j++;
  }
  cout<<names[i][j]<<" "<<len;
}
return 0;
}
