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
    int lowest=INT_MAX, highest = INT_MIN;
    unordered_map<int,int> m;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
        
        if(arr[i]<lowest)
        {
            lowest = arr[i];
        }
        if(arr[i]>highest)
        highest = arr[i];
    }
    int flag=1;
    for(int i=lowest;i<=(lowest+n-1);i++)
    {
        if(m[i]==1)
        continue;
        else
        {
            cout<<"No"<<endl;
            flag=0;
            break;
        }
    }
    if(flag)
    cout<<"Yes"<<endl;
    return 0;
}