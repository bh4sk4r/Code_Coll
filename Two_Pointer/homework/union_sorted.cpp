#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n,m;
    cin>>n>>m;
    vector<int> arr1(n),arr2(m);

    for(int i=0;i<n;i++)
    cin>>arr1[i];

    for(int i=0;i<m;i++)
    cin>>arr2[i];

    int i=0,j=0;
    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j])
        {
            int v = arr1[i];
            while(i<n && arr1[i]==v)
            i++;
            while(j<m && arr2[j]==v)
            j++;

            cout<<v<<" ";
        }
        else
        {
            if(arr1[i]<arr2[j])
            {
                int v = arr1[i];
                while(i<n && arr1[i]==v)
                i++;

                cout<<v<<" ";
            }
            else
            {
                int v = arr2[j];
                while(j<m && arr2[j]==v)
                j++;

                cout<<v<<" ";
            }
        }
    }
    while(i<n)
    {
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<m)
    {
        cout<<arr2[j]<<" ";
        j++;
    } 
    return 0;
}