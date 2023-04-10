#include <bits/stdc++.h>
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int num;
    cin>>num;
    
    ll x=1;
    ll mask = x<<31;
    int ctr=0;
    
    while(mask)
    {
        if((num&mask))
        ctr++;
        
        mask >>= 1;
    }
    cout<<ctr;
    return 0;
}