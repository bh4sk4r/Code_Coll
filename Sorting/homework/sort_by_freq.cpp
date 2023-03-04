#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool cmp(pair<int,int> p1, pair<int,int> p2)
{
    if(p1.second!=p2.second)
    return p1.second>p2.second;

    return p1.first<p2.first;
}
int main()
{
    fastio;
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> arr(N),map(61,0);
        vector<pair<int,int>> comb;
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
            map[arr[i]]++;
        }
        for(int i=0;i<N;i++)
        {
            comb.push_back({arr[i],map[arr[i]]});
        }
        
        sort(comb.begin(),comb.end(),cmp);
        for(int i=0;i<N;i++)
        cout<<comb[i].first<<" ";
        cout<<endl;
        
    }    
    return 0;
}