#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
char word[100];
cin>>word;
int ctr=0;
for(int i=0;word[i]!='\0';i++)
ctr++;
cout<<ctr;
return 0;
}
