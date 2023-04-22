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
    vector<int> arr(n),pref_xor(n);
    int prev=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        pref_xor[i] = prev^arr[i];
        prev = pref_xor[i];
    }
    int ctr=0;
    for(int i=0;i<n;i++)
    {
        for(int k=i+1;k<n;k++)
        {
            if(i==0)
            {
                if(pref_xor[k]==0)
                ctr += (k-i);
            }
            else
            {
                if((pref_xor[k]^pref_xor[i-1]) == 0)
                ctr += (k-i);
            }
        }
    }
    cout<<ctr;
    return 0;
}