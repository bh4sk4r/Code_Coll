#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int power(int n,int k)
{
    if(k==0)
    return 1;
    if(k==1)
    return n;
    int temp = power(n,k/2);
    int prod = temp*temp;
    if(k%2==0)
    {
        return prod;
    }
    if(k%2!=0)
    {
        return prod*n;
    }
}
int main()
{
    fastio;
    // code goes here
    int n=2,k=5;
    cout<<power(n,k);
    return 0;
}