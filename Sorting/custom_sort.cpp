#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool cmp(pair<char,int> p1,pair<char,int> p2)
{
    return p1.second<p2.second;
}

int main()
{
    fastio;
    string s;
    cin>>s;
    vector<int> rank(26,INT_MAX);
    vector<pair<char,int>> p1;
    for(int i=0;i<s.size();i++)
    {
        rank[s[i]-'a']=i;
    }
    string t;
    cin>>t;
    for(int i=0;i<t.size();i++)
    {
        p1.push_back(make_pair(t[i],rank[t[i]-'a']));
    }
    sort(p1.begin(),p1.end(),cmp);
    
    string ans;
    for(int i=0;i<p1.size();i++)
    {
        ans+=(p1[i].first);
    }
    cout<<ans;
    return 0;
}