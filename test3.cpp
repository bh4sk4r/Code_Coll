#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n,m;
    cin>>n>>m;
    vector<vector<char>> matrix(n,vector<char> (m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin>>matrix[i][j];
    }
    vector<vector<int>> mat(n, vector<int> (m));
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            mat[i][j] = matrix[i][j]-48;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<mat[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}