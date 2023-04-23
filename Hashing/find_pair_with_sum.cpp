#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    unordered_map<int,int> m;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    int x,flag=0;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(m.find(x-arr[i])!=m.end())
        {
            flag=1;
            cout<<"true"<<endl;
            break;
        }
    }
    if(!flag)
    cout<<"false"<<endl;
    return 0;
}