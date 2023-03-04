#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int N;
    cin>>N;
    vector<int> catalan(N+1,0);
    catalan[0] = 1;
    catalan[1] = 1;
    for(int i=2;i<=N;i++)
    {
        for(int j=0;j<i;j++)
        {
            catalan[i] += catalan[j]*catalan[i-1-j];
        }
    }
    for(int i=0;i<=N;i++)
    {
        cout<<catalan[i]<<" ";
    }

    return 0;
}