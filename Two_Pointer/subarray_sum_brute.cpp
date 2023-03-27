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

    int sum,flag=0;
    cin>>sum;
    
    for(int i=0;i<n;i++)
    {
        int s=0;
        for(int j=i;j<n;j++)
        {
            s+=arr[j];
            if(s==sum)
            {
                flag=1;
                cout<<"True";
                break;
            }
        }
        if(flag==1)
        break;
    }
    if(flag==0)
    cout<<"False";
    return 0;
}