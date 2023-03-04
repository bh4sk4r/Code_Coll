#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool issafe(vector<vector<int>> grid,int i,int j)
{
    if(i<0 || j<0 || i==grid.size() || j==grid[0].size())
    return false;
    if(grid[i][j]==0)
    return false;
    return true;
}
void show_path(vector<vector<int>>& grid,string& aux,int i,int j)
{
    if(!issafe(grid,i,j))
    return;

    if(i==grid.size()-1 && j==grid[0].size()-1)
    {
        cout<<aux<<" ";
        return;
    }
    grid[i][j]=0;
    if(issafe(grid,i+1,j))
    {
        aux.push_back('D');
        show_path(grid,aux,i+1,j);
        aux.pop_back();
    }
    if (issafe(grid,i, j-1))
    {
        aux.push_back('L');
        show_path(grid, aux, i, j-1);
        aux.pop_back();
    }
    if (issafe(grid,i, j+1))
    {
        aux.push_back('R');
        show_path(grid, aux, i, j+1);
        aux.pop_back();
    }
    if (issafe(grid,i-1, j))
    {
        aux.push_back('U');
        show_path(grid, aux, i - 1, j);
        aux.pop_back();
    }
    grid[i][j]=1;
}
int main()
{
    fastio;
    // code goes here
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<vector<int>> grid(n,vector<int> (n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cin>>grid[i][j];
        }
        string aux="";
        show_path(grid,aux,0,0);
        cout<<endl;
    }
    return 0;
}