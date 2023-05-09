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
    vector<vector<int>> arr(m, vector<int> (n));
    unordered_map<int, int> row, column;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j])
            {
                row[i] = 1;
                column[j] = 1;
            }
        }
    }

    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(row.find(i)!=row.end() || column.find(j)!=column.end())
            {
                arr[i][j] = 1;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}