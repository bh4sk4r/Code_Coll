#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a = 9;
int* p = &a;
int** q = &p;
cout<<a<<" "<<p<<" "<<q<<" "<<*p<<" "<<*q<<" "<<**q;
cout<<sizeof(int*);
return 0;
}
