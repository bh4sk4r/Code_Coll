#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void bb(char arr[], int l, int r, int &N)
{
    if (l == r)
    {
        if (l == N)
        {
            for (int i = 0; i < (l + r); i++)
            {
                cout << arr[i];
            }
            cout << endl;
            return;
        }
        else
        {
            arr[l + r] = '(';
            bb(arr, l + 1, r, N);
        }
    }
    if (l > r)
    {
        if (l == N)
        {
            arr[l + r] = ')';
            bb(arr, l, r + 1, N);
        }
        else
        {
            arr[l + r] = '(';
            bb(arr, l + 1, r, N);
            arr[l + r] = ')';
            bb(arr, l, r + 1, N);
        }
    }
}
int main()
{
    fastio;
    // code goes here
    int N;
    cin>>N;
    char arr[2*N];
    bb(arr,0,0,N);
    return 0;
}