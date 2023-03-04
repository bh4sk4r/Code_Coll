#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool cmp(pair<int,int> p1, pair<int,int> p2)
{
    if(p1.second!=p2.second)
        return p1.second<p2.second;
    
    return p1.first<p2.first;
}
int main()
{
    fastio;
    int n,m;
    cin>>n>>m;
    vector<int> arr1(n),arr2(m);
    int maxm = INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        if(arr1[i]>maxm)
        maxm = arr1[i];
    }
    vector<pair<int,int>> v;
    vector<int> map(maxm+1,INT_MAX);
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
        map[arr2[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
        v.push_back({arr1[i],map[arr1[i]]});
    }

    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" ";
    }

    return 0;
}