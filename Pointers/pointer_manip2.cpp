#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x=9;
int* a = &x;
*a=10;
int* b = &x;
int* c = &x;
cout<<x<<" "<<*a<<" "<<*b<<" "<<*c;
return 0;
}
