#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    string t,ans;
    cin>>t;
    int x = t.size();
    stack<string> st;
    for(int i=0;i<x;)
    {
        ans="";
        if(t[i]=='/')
        {
            i++;
            continue;
        }
        if(t[i]=='.')
        {
            if(i<x-1 && t[i+1]=='.' && !st.empty())
            {
                st.pop();
                i++;
            }
            else
            {
                i++;
                continue;
            }
        }
        else
        {
            while(t[i]>96 && t[i]<123)
            {
                ans+=t[i];
                i++;
            }
            st.push(ans);
        }
    }
    return 0;
}