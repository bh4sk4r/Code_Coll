#include <bits/stdc++.h>
using namespace std;

int main()
{
char word[100] = "This Is Awesome";
char vowels[100] = "aeiouAEIOU";
int i=0,ctr=0;
while(word[i]!='\0')
{
  for(int j=0;vowels[j]!='\0';j++)
  {
    if(word[i]==vowels[j])
    {
      ctr++;
      break;
    }
  }
  i++;
}
cout<<ctr;
return 0;
}
