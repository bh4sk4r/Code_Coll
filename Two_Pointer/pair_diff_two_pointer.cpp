#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];

    sort(arr.begin(),arr.end());

    int diff;
    cin>>diff;

    int i=0,j=1,flag=0;
    while(i<n && j<n)
    {
        int cdiff = arr[j]-arr[i];
        if(cdiff==diff && i!=j)
        {
            cout<<"true"<<endl;
            flag=1;
            break;
        }
        else if(cdiff>diff)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    if(flag==0)
    cout<<"false"<<endl;

    return 0;
}