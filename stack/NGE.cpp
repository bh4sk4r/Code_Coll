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
    stack<int> st;
    vector<int> el(n),nge(n);
    for(int i=0;i<n;i++)
    {
        cin>>el[i];
    }
    for(int i=0;i<n;i++)
    {
        if(st.empty())
        st.push(i);
        if(!st.empty() && el[i]<=el[st.top()])
        {
            st.push(i);
        }
        else
        {
            while(!st.empty() && el[st.top()]<el[i])
            {
                nge[st.top()] = el[i];
                st.pop();
            }
            st.push(i);
        }
    }
    while(!st.empty())
    {
        nge[st.top()] = -1;
        st.pop();
    }
    for(int i=0;i<n;i++)
    {
        cout<<el[i]<<" -> "<<nge[i]<<endl;
    }
    return 0;
}