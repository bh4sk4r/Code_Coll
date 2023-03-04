#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int ctr = 0;
bool issafe(vector<vector<int>>& grid, int i, int j)
{
    int n = grid.size();
    int m = grid[0].size();
    if (i < 0 || j < 0 || i == n || j == m)
        return false;
    if(grid[i][j]==-1)
    return false;
    return true;
}
void cpath(vector<vector<int>>& grid, int i, int j, int walk_sq)
{
    if (!issafe(grid, i, j))
        return;

    if (grid[i][j] == 2)
    {
        if(walk_sq==-1)
        ctr++;
        return;
    
    }
    if(walk_sq==-1)
    return;

    grid[i][j]=-1;
    cpath(grid,i+1,j,walk_sq-1);
    cpath(grid, i, j+1, walk_sq - 1);
    cpath(grid, i-1, j, walk_sq - 1);
    cpath(grid, i, j-1, walk_sq - 1);
    grid[i][j]=0;
}
int main()
{
    fastio;
    int n,m;
    cin>>n>>m;
    vector<vector<int>> grid(n,vector<int> (m));
    int walk_sq=0,spx,spy;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]==1)
            {
                spx=i;
                spy=j;
            }
            if(grid[i][j]==0)
            walk_sq++;
        }
    }
    //cout<<spx<<" "<<spy<<" "<<walk_sq<<endl;
    cpath(grid,spx,spy,walk_sq);
    cout<<ctr;
    return 0;
}