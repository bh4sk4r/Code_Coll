#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    
    string s1;
    cin>>s1;
    int n;
    cin >> n;
    int s;
    vector<string> words(n);
    unordered_map<string,int> m1,m2;
    for(int i=0;i<n;i++)
    {
        cin>>words[i];
        m1[words[i]]++;
    } 
    s = words[0].size();
    s *= n;

    for(int )


    return 0;
}