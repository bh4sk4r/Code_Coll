#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
char word[100] = "This is awesome";
int ctr=0;
for(int i=0;word[i]!='\0';i++)
{
  if(word[i]=='a' || word[i]=='e' || word[i]=='i' ||word[i]=='o' || word[i]=='u' )
  ctr++;
}
cout<<ctr;
return 0;
}
