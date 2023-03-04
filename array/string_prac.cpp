#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N;
cin>>N;
string s[N],t[N];
for(int i=0;i<N;i++)
{
  cin>>s[i]>>t[i];
}
for(int i=0;i<N;i++)
{
  if(s[i]==t[i])
  cout<<s[i]<<" = "<<t[i];
  else
  cout<<s[i]<<" != "<<t[i];
}
return 0;
}
