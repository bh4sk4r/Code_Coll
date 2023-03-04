#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
char s1[100];
char s2[100];
cin>>s1;
cin>>s2;
cout<<strlen(s1)<<" "<<strlen(s2)<<endl;
//strcpy(s2,s1);
cout<<s2<<endl;
//cout<<strcat(s1,s2)<<endl;
//cout<<s1<<endl;
return 0;
int x = strcmp(s1,s2);
cout<<x<<endl;
}
