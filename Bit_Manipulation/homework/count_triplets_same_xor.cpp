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

    vector<int> pre_xor(n);
    pre_xor[0] = arr[0];
    for(int i=1;i<n;i++)
    {
        pre_xor[i] = pre_xor[i-1]^arr[i];
    }

    int a,b,ctr=0;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j;k<n;k++)
            {
                if(i==0)
                a = pre_xor[j-1];
                else
                a = pre_xor[j-1]^pre_xor[i-1];

                b = pre_xor[j-1]^pre_xor[k];

                if(a==b)
                ctr++;
            }
        }
    }
    cout<<ctr;
    return 0;
}