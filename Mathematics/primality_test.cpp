#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N,flag=1;
cin>>N;
for(int i=2;i<sqrt(N);i++)
{
  if(N%i==0)
  {
    cout<<"Not Prime"<<endl;
    flag=0;
    break;
  }
}
if(flag==1)
cout<<"Prime"<<endl;
return 0;
}
