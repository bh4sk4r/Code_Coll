#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int N;
cin>>N;
int sqr = sqrt(N);
if(sqr*sqr == N)
cout<<"False";
else
cout<<"True";
return 0;
}
