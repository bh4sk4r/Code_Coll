#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int> (n));
    unordered_map<int,int> row,col, maj_dg, min_dg;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {   
                row[i] = 1;
                col[j] = 1;
                maj_dg[i-j] = 1;
                min_dg[i+j] = 1;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(row[i]==1 || col[j]==1 || maj_dg[i-j]==1 || min_dg[i+j]==1)
            arr[i][j] = 1;

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}