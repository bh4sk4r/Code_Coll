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
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int x,flag=0;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        int rem = x-arr[i];
        if(m.find(rem)!=m.end())
        {
            cout<<"True";
            flag=1;
            break;
        }
        m[arr[i]]++;
    }
    if(!flag)
    cout<<"False"<<endl;
    return 0;
}