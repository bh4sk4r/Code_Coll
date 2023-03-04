#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

string substring(string s,int i,int j)
{
    string temp="";
    for(int k=i;k<=j;k++)
    {
        temp+=s[k];
    }
    return temp;
}
int main()
{
    fastio;
    // code goes here
    string s;
    cin>>s;
    cout<<substring(s,0,0);
    return 0;
}