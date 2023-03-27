#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
pair<int,int> two_point(vector<int>& arr,int sum)
{
    int n = arr.size();
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==sum)
        return make_pair(arr[i],arr[j]);
        else
        {
            if(arr[i]+arr[j]<sum)
            i++;
            else
            j--;
        }
    }
    return make_pair(-1,-1);
}

int main()
{
    fastio;
    int n,sum;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>sum;
    sort(arr.begin(),arr.end());
    pair<int,int> ans = two_point(arr,sum);
    cout<<ans.first<<" "<<ans.second;

    return 0;
}