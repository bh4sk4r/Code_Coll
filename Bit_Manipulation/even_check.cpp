#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;

    if((n&1)==0)
    cout<<"even";
    else
    cout<<"odd";

    return 0;
}