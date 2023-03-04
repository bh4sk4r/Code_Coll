#include <bits/stdc++.h>
using namespace std;
int h_ind(vector<int> &arr, int l, int h)
{
    int m, n = arr.size();
    while (l <= h)
    {
        m = l + (h - l) / 2;
        if (arr[m] == (n - m))
            return arr[m];
        if (arr[m] <= n - m)
            l = m + 1;
        if (arr[m] > n - m)
            h = m - 1;
    }
    return -1;
}
int main()
{
    // your code goes here
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    cout << h_ind(arr, 0, N - 1);
    return 0;
}