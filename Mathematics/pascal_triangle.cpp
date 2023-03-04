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
    // code goes here
    int N;
    cin>>N;
    vector<vector<int>> pascal(N,vector<int> (N,0));
    for(int i=0;i<N;i++)
    {
        pascal[i][0] = 1;
    }
    for(int i=1;i<N;i++)
    {
        for(int j=1;j<=i;j++)
        {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<pascal[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}