#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool sol(vector<int>& arr,int n)
{
    unordered_map<int,int> m;
    int psum=0;
    m.insert({psum,1});

    for(int i=0;i<n;i++)
    {
        psum += arr[i];
        if(m.find(psum)!=m.end())   //if(m.find(psum-k)!=m.end())  --> only change if required sum is k
        return true;
        m.insert({psum,1});
    }
    return false;
}
int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    return 0;
}