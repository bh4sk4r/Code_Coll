#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
int power2(int n,int k)
{
    if(k==1)
    return n;
    if(k==0)
    return 1;
    return power2(n,k/2)*power2(n,k/2);
}
int power(int n,int k)
{
    if(k==0)
    return 1;
    return n*power(n,k-1);
}
using namespace std;

int main()
{
    fastio;
    // code goes here
    int n=3;
    int k=4;
    cout<<power(n,k)<<endl;
    cout<<power2(n,k)<<endl;
    return 0;
}