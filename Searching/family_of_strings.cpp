#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void complement(char& a)
{
    if(a=='1')
    a ='0';
    else
    a ='1';
}
char bsearch(int i,int n)
{
    char el='0';
    int len = pow(2,i+1)-1;
    int m = len/2;
    int delta = pow(2,i-1);
    while(delta)
    {
        if(n>m)
        {
            m+=delta;
            delta/=2;
            complement(el);
        }
        else if(n<m)
        {
            m-=delta;
            delta/=2;
        }
        else
        return el;
    }
    return el;
        
}
int main()
{
    fastio;
    int i;
    cin>>i;
    int len = pow(2,i+1)-1;

    for(int j=0;j<len;j++)
    cout<<bsearch(i,j)<<" ";
    return 0;
}