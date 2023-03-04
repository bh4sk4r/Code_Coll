#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
char c[100] = "shubham";
for(int i=1;c[i]!='\0';i++)
{
  for(int j=i;j>0;j--)
  {
    cout<<j<<" ";
    if(c[j]<c[j-1])
    {
    char temp = c[j];
    c[j] = c[j-1];
    c[j-1] = temp;
    cout<<j<<" "<<c<<endl;
    }
  }
}
cout<<c;
return 0;
}
