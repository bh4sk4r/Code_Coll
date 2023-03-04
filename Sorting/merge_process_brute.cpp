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
    vector<int> arr1(m);
    vector<int> arr2(n);
    vector<int> arr3(m+n);
    int k=0;
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
        arr3[k] = arr1[i];
        k++;
    }

    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
        arr3[k] = arr2[i];
        k++;
    }
    sort(arr3.begin(),arr3.end());
    for(int i=0;i<m+n;i++)
    cout<<arr3[i]<<" ";
    return 0;
}