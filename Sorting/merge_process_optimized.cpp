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
    vector<int> arr1(m),arr2(n),arr3(m+n);
    for(int i=0;i<m;i++)
    cin>>arr1[i];
    for(int i=0;i<n;i++)
    cin>>arr2[i];

    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(arr1[i]<=arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i<m)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j<n)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
    
    for(int a = 0;a<m+n;a++)
    cout<<arr3[a]<<" ";
    
    return 0;
}