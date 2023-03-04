#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int ans_found=0;
bool isvalid(vector<vector<int>>& map,int i,int j)
{
    if(i<0 || j<0 || i==map.size() || j==map[0].size())
    return false;

    if(map[i][j])
    return false;

    return true;

}
void wsearch(vector<vector<char>>& grid, int i,int j,int k,vector<vector<int>>& map,string& word)
{
    if(ans_found)
    return;
    
    if(k==word.size()-1)
    {
        ans_found=1;
        return;
    }
    map[i][j]=1;

    if(isvalid(map,i,j-1) && grid[i][j-1]==word[k+1])
    wsearch(grid,i,j-1,k+1,map,word);

    if (isvalid(map, i-1, j) && grid[i-1][j] == word[k+1])
    wsearch(grid, i-1, j, k + 1, map,word);

    if (isvalid(map, i, j+1) && grid[i][j+1] == word[k+1])
    wsearch(grid, i, j+1, k + 1, map,word);

    if (isvalid(map, i+1, j) && grid[i+1][j] == word[k+1])
    wsearch(grid, i+1, j, k + 1, map,word);

    map[i][j]=0;
}
int main()
{
    fastio;
    // code goes here
    int m,n;
    cin>>m>>n;
    vector<vector<char>> board(m, vector<char> (n));
    vector<vector<int>> map(m, vector<int> (n,0));
    vector<pair<int,int>> idx;
    string word;
    cin>>word;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>board[i][j];
            if(board[i][j]==word[0])
            {
                idx.push_back(make_pair(i,j));
            }
        }
    }
    for(int i=0;i<idx.size();i++)
    {
        wsearch(board,idx[i].first,idx[i].second,0,map,word);
    }
    if(ans_found)
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
    return 0;
}