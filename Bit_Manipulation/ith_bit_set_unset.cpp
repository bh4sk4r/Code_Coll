#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int num,i;
    cin>>num>>i;

    int mask = 1<<i;
    if(num&mask)
    cout<<"1";
    else
    cout<<"0";
    return 0;
}