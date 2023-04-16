#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n,xore=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        xore = xore^arr[i];
    }
    

    int x = floor(log2(xore));

    int mask = (1<<x);
    int n1=0,n2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]&mask)
        {
            n1 = (n1^arr[i]);
        }
        else
        n2 = n2^arr[i];
    }
    cout<<n1<<" "<<n2;
    return 0;
}