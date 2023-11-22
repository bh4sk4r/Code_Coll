#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string s;
    cin>>s;
    vector<char> v1;
    for(int i=0;i<s.size();i++)
    {
        if(v1.empty() || v1.back()!=s[i])
        v1.push_back(s[i]);
        else
        v1.pop_back();
    }
    for(int i=0;i<v1.size();i++)
    cout<<v1[i];
    return 0;
}