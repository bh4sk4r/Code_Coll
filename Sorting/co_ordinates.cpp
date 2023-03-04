#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2)
{
    long long d1 = (p1.first*p1.first + p1.second*p1.second);
    long long d2 = (p2.first * p2.first + p2.second * p2.second);

    return d1<d2;
}


int main()
{
    fastio;
    // code goes here
    int N;
    cin>>N;
    vector<pair<int,int>> v1(N);
    for(int i=0;i<N;i++)
    {
        cin>>v1[i].first>>v1[i].second;
    }
    sort(v1.begin(),v1.end(),comp);

    for (int i = 0; i < N; i++)
    {
        cout<<v1[i].first<<","<<v1[i].second<<" ";
    }
    return 0;
}