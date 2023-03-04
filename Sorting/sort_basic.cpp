#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool compare(int a,int b)
{
    return abs(a)<=abs(b);
}
int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];

    sort(arr.begin(),arr.end(),compare);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
}