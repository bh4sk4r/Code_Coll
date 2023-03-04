#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N,a,b;
cin>>N>>a>>b;
int maxm = max(a,b);
int minm = min(a,b);
while(maxm%minm!=0)
{
  int temp = minm;
  minm = maxm%minm;
  maxm = temp;
}
int lcm = (a*b)/minm;
cout<<N/a + N/b - N/lcm;
return 0;
}
