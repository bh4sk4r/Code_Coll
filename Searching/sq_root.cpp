#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int sq_root(int N,int l,int h)
{
    int m;
    while(l<=h)
    {
        m = l+(h-l)/2;
        if(m*m<=N)
        {
            if((m+1)*(m+1)>N)
            return m;
            else
            l = m+1;
        }
        else
        h = m-1;
    }
    return h;
}
int main()
{
    fastio;
    int N;
    cin>>N;
    cout<<sq_root(N,0,N);
    return 0;
}