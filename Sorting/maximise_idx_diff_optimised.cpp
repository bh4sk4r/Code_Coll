#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool cmp(pair<int,int> p1, pair<int,int> p2)
{
    if(p1.first==p2.first)
    return p1.second<p2.second;

    return p1.first<p2.first;
}
int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        a.push_back({arr[i],i});
    }
    sort(a.begin(),a.end(),cmp);
    
    int suff_max = a[n-1].second,max_diff = INT_MIN;

    for(int i=n-2;i>=0;i--)
    {
        int diff = suff_max-a[i].second;
        
        if(diff>max_diff)
        max_diff = diff;

        suff_max = max(suff_max,a[i].second);
    }
    if(max_diff>0)
    cout<<max_diff<<endl;
    else
    cout<<"-1"<<endl;
    return 0;
}