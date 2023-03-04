#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
struct triplet
{
    int val;
    int freq;
    int idx;
};
bool cmp(triplet v1,triplet v2)
{
    if(v1.freq!=v2.freq)
    return v1.freq<=v2.freq;
    if(v1.val!=v2.val)
    return v1.val<=v2.val;
    if(v1.idx!=v2.idx)
    return v1.idx<=v2.idx;
}
int main()
{
    fastio;
    int N;
    cin>>N;
    
    vector<int> arr(N);
    vector<int> occ(100,0);
    vector<triplet> v(N);
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
        occ[arr[i]]++;
    }
    for(int i=0;i<N;i++)
    {
        v[i].freq = occ[arr[i]];
        v[i].val = arr[i];
        v[i].idx = i;
    }
    
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<N;i++)
    {
        cout<<v[i].val<<" ";
    }
    return 0;
}