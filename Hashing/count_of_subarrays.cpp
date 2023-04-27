#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    unordered_map<int,int> m;
    m.insert({0,1});
    int cnt=0;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int psum=0;
    for(int i=0;i<n;i++)
    {
        psum += arr[i];
        if(m.find(psum-k)!=m.end())
        {
            cnt += m[psum-k];
        }
        m[psum]++;
    }
    cout<<cnt<<endl;
    return 0;
}