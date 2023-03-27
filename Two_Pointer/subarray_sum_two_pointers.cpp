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

    int sum;
    cin>>sum;

    int i=0,j=0,csum=arr[0];
    while(j<n)
    {
        if(csum<sum)
        {
            j++;
            if(j<n)
            csum+=arr[j];
        }
        else if(csum>sum)
        {
            csum-=arr[i];
            i++;
            if(i>j)
            {
                j++;
                if(j<n)
                csum=arr[j];
            }
        }
        else
        {
            cout<<i<<" "<<j;
           // for(int k=i;k<=j;k++)
            //cout<<arr[k]<<" ";

            break;
        }
    }

    return 0;
}