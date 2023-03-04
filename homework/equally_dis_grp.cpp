#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int T;
cin>>T;
while(T--)
{
  int N;
  cin>>N;
  int arr[N],freq[10001];
  for(int i=0;i<N;i++)
  {
    cin>>arr[i];
    freq[arr[i]]++;
  }
  int gcd = freq[arr[0]];
  for(int i=1;i<N;i++)
  {
    int maxm = max(gcd,freq[arr[i]]);
     int minm = min(gcd,freq[arr[i]]);
    while(maxm%minm!=0)
    {
      int temp = minm;
      minm = maxm%minm;
      maxm = temp;
    }
    gcd = minm;
  }
  if(gcd==1)
  cout<<"false"<<endl;
  else
  cout<<"true"<<endl;
}
return 0;
}
