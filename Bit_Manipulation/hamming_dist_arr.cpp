//Brute Force

#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int ham_dist(int a,int b)
{
    int x = (a^b);
    int i = ceil(log2(x));
    int mask = (1<<i),ctr=0;
    while(mask)
    {
        if(x&mask)
        ctr++;
        mask>>=1;
    }
    return ctr;
}
int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int hd=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            hd += ham_dist(arr[i],arr[j]);
        }
    }
    cout<<hd;
    return 0;
}