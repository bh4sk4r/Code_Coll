#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mat(m, vector<int> (n));

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    for(int j=0;j<n;j++)
    {
        for(int i=1;i<m;i++)
        {
            if(!mat[i][j])
            mat[i][j] += mat[i-1][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<mat[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}