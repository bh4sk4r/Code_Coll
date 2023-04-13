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
    int ctr=0;
    while(num)
    {
        num = (num&(num-1));
        ctr++;
    }
    cout<<ctr;
    return 0;
}