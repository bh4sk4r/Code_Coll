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

    int b,ctr=0;
    cin>>b;

    for(int i=0;i<n;i++)
    {
        if(arr[i]*arr[i]<b)
        ctr++;
        else
        break;
    }

    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]*arr[j]<b)
        {
            ctr += 2*(j-i);
            i++;
        }
        else
        j--;
    }
    cout<<ctr;
    return 0;
}