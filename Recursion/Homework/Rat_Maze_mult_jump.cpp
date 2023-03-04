#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int min_hop=INT_MAX;
vector<vector<int>> ans;
bool issafe(vector<vector<int>>& grid,int i,int j)
{
    int m = grid.size();
    int n = grid[0].size();
    if(i>m-1 || j>n-1)
    return false;
    return true;
}
void rmaze(vector<vector<int>>& grid,int i,int j,int hc,vector<vector<int>>& aux)
{
    if(i==grid.size()-1 && j==grid[0].size())
    {
        if(hc<min_hop)
        {
            min_hop=hc;
            ans=aux;
        }
        return;
    }
    for(int k=grid[i][j];k>0;k--)
    {
        if(issafe(grid,i,j+k) && !grid[i][j+k])
        {
            aux[i][j+k]=1;
            rmaze(grid,i,j+k,hc+k,aux);
            aux[i][j+k]=0;
        }
        if(issafe(grid,i+k,j) && !grid[i+k][j])
        {
            aux[i+k][j]=1;
            rmaze(grid,i+k,j,hc+k,aux);
            aux[i+k][j]=0;
        }
    }

    if(i==0 && j==0 && ans.size()==0)
    {
        vector<int> temp={-1};
        ans.push_back(temp);
    }
}
int main()
{
    fastio;
    // code goes here
    return 0;
}