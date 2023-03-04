#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int last_occ(vector<int> &arr, int l, int h, int key)
{
    int m;
    while (l <= h)
    {
        m = l + (h - l) / 2;
        if (arr[m] > key)
            h = m - 1;
        else if (arr[m] < key)
            l = m + 1;
        else
        {
            if (m == arr.size() - 1)
                return m;
            else if (arr[m + 1] != key)
                return m;
            else
                l = m + 1;
        }
    }
    return h;
}

int less_te(vector<vector<int>> &arr, int key)
{
    int ctr = 0, n = arr.size();
    for (int i = 0; i < arr.size(); i++)
    {
        ctr += (last_occ(arr[i], 0, n - 1, key) + 1);
    }
    return ctr;
}
int sol(vector<vector<int>> &arr, int minm, int maxm, int k)
{
    int mid;
    while (minm <= maxm)
    {
        mid = minm + (maxm - minm) / 2;
        int ctr = less_te(arr, mid);

        if (ctr < k)
            minm = mid + 1;

        else
        {
            if (less_te(arr, mid - 1) < k)
                return mid;
            else
                maxm = mid - 1;
        }
    }
    return -1;
}
int main()
{
    fastio;
    // code goes here
    int N, minm = INT_MAX, maxm = INT_MIN;
    cin >> N;
    vector<vector<int>> arr(N, vector<int>(N));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        cin>>arr[i][j];
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i][0] < minm)
        minm = arr[i][0];

        if (arr[i][N - 1] > maxm)
        maxm = arr[i][N - 1];
    }
    int k;
    cin >> k;
    cout << sol(arr, minm, maxm, k);
    return 0;
}