#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool pair_diff(vector<int>& arr,int diff)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(abs(arr[i]-arr[j])==diff)
            return true;
        }
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
    int diff;
    cin>>diff;
    cout<<pair_diff(arr,diff);
    return 0;
}