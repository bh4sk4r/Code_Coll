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
    vector<int> arr(n),pos,neg,ans(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<n;i++)
    {
       if(arr[i]>=0)
       pos.push_back(arr[i]);
       else
       neg.push_back(arr[i]); 
    }

    reverse(neg.begin(),neg.end());
    int i=0,j=0,k=0;

    for(;i<pos.size() && j<neg.size();)
    {
        if(neg[i]*neg[i]<=pos[j]*pos[j])
        {
            ans[k++] = neg[i]*neg[i];
            i++;
        }
        else
        {
            ans[k++] = pos[j]*pos[j];
            j++;
        }
    }

    for(;i<neg.size();)
    {
        ans[k++] = neg[i] * neg[i];
        i++;
    }
    for(;j<pos.size();)
    {
        ans[k++] = pos[j]*pos[j];
        j++;
    }

    for(int c=0;c<n;c++)
    cout<<ans[c]<<" ";

    return 0;
}