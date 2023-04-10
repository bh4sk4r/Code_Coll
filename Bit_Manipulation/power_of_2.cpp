#include <bits/stdc++.h>

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
    if(num&(num-1))
    cout<<"No";
    else
    cout<<"Yes";
    return 0;
}