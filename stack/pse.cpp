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
    vector<int> ht(n);
    for(int i=0;i<n;i++)
    cin>>ht[i];
    vector<int> pse;
    stack<int> pse_st;
    for(int i=n-1;i>=0;i--)
    {
        if(pse_st.empty())
        {
            pse_st.push(i);
        }
        else if(pse_st.top()<ht[i])
        {
            pse_st.push(i);
        }
        else
        {
            while(!pse_st.empty() && pse_st.top()>ht[i])
            {
                pse[pse_st.top()] = i;
                pse_st.pop();
            }
            pse_st.push(i);
        }
    }
    
    return 0;
}