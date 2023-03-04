#include <bits/stdc++.h>
using namespace std;

bool bin_grid(vector<vector<int>> &grid, int i, int j, int key)
{
    int n = grid.size(), m = grid[0].size();
    while (i < n && j < m)
    {
        if (grid[i][j] == key)
            return true;
        if (key > grid[i][j])
            i++;
        else if (key < grid[i][j])
            j--;
    }
    return false;
}
int main()
{
    // your code goes here
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];
    }
    int T;
    cin >> T;
    while (T--)
    {
        int target;
        cin >> target;
        if (bin_grid(grid, 0, m - 1, target))
            cout << "true" << endl;
        else
            cout<<"false"<<endl;
    }
    return 0;
}