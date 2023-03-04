#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x=9;
int* y = &x;
cout<<x<<endl;
*y = 10;
cout<<x;
return 0;
}
