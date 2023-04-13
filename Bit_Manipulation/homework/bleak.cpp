#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int count_set(int x)
{
    int ctr=0;
    while(x)
    {
        x = (x&(x-1));
        ctr++;
    }
    return ctr;
}

int main()
{
    fastio;
    int n;
    cin>>n;

    int i= n-ceil(log2(n)),flag=0;

    for(i;i<n;i++)
    {
        if(count_set(i)+i == n)
        {
            flag=1;
            cout<<"0";
            break;
        }
    }
    if(!flag)
    cout<<"1";

    return 0;
}