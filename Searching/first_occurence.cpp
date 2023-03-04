#include <bits/stdc++.h>
using namespace std;
int bsearch(vector<int> &arr, int l, int h, int key)
{
    int m;
    while (l <= h)
    {
        m = (l + h) / 2; 
        if (arr[m] == key) 
        return m;
        if (arr[m] < key)
        {
            l = m + 1;
        }
        else if (arr[m] > key)
        {
            h = m - 1;
        }
    }
    return -1;
}
int main()
{
    // your code goes here
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int T;
    cin >> T;
    while (T--)
    {
        int target;
        cin >> target;
        cout<<bsearch(arr,0,n-1,target)<<endl;
    }
    return 0;
}