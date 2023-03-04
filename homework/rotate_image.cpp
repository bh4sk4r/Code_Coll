#include <iostream>
using namespace std;
int main()
{
    // your code goes here
    int N;
    cin >> N;
    int arr[N][N], new_arr[N][N];
    ;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];
    }
    int temp;
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N / 2; i++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[N - i - 1][j];
            arr[N - i - 1][j] = temp;
        }
    }

    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            new_arr[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << new_arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}