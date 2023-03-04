#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int csum(vector<int> &arr, int i, int sum, int &N)
{
    if (sum == 0)
    {
        return 1;
    }
    if (sum < 0)
        return 0;

    if (i == N)
        return 0;

    return (csum(arr, i, sum - arr[i], N) + csum(arr, i + 1, sum, N));
}

int main()
{
    fastio;
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    int sum;
    cin >> sum;
    cout << csum(arr, 0, sum, N);
    return 0;
}