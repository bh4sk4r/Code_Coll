#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a,b;
cin>>a>>b;
int maxm = max(a,b);
int minm = min(a,b);
int lcm;
for(int i=1;i<=minm;i++)
{
  if(maxm*i%minm==0)
  {
    lcm = maxm*i;
    break;
  }
}
cout<<lcm;
return 0;
}
