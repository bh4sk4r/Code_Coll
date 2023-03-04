#include <iostream>
using namespace std;
int main()
{
    // your code goes here
    int m, n, k;
    cin >> m >> n >> k;
    int mat[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    }

    int prev_sum = 0;
    for (int i = 0; i < m; i++)
    {
        prev_sum = mat[i][0];
        for (int j = 1; j < n; j++)
        {
            mat[i][j] += prev_sum;
            prev_sum = mat[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        prev_sum = mat[0][i];
        for (int j = 1; j < m; j++)
        {
            mat[j][i] += prev_sum;
            prev_sum = mat[j][i];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cout<<mat[i][j]<<" ";
        cout<<endl;
    }
    int answer[m][n], ans;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x1 = i - k, y1 = j - k;
            int x2 = i + k, y2 = j + k;

            if (x1 < 0)
                x1 = 0;
            if (y1 < 0)
                y1 = 0;
            if (x2 > m)
                x2 = m - 1;
            if (y2 > n)
                y2 = n - 1;

            ans = mat[x2][y2];
            if (x1 - 1 >= 0)
                ans -= mat[x1 - 1][y2];
            if (y1 - 1 >= 0)
                ans -= mat[x2][y1 - 1];
            if (x1 - 1 >= 0 && y1 - 1 >= 0)
                ans += mat[x1 - 1][y1 - 1];
            answer[i][j] = ans;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << answer[i][j] << " ";
        cout << endl;
    }
    return 0;
}