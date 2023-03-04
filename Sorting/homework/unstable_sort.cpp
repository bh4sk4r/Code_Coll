#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool cmp(pair<int,int> p1, pair<int,int> p2)
{
    if(p1.first!=p2.first)
    return p1.first<p2.first;

    return p1.second>p2.second;
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
        vector<int> v1(N);
        for(int i=0;i<N;i++)
        cin>>v1[i];

        vector<pair<int,int>> p;
        for(int i=0;i<N;i++)
        {
            p.push_back({v1[i],i+1});
        }
        sort(p.begin(),p.end(),cmp);
        for(int i=0;i<N;i++)
        {
            cout<<p[i].second<<" ";
        }
        cout<<endl;
    }    
    return 0;
}