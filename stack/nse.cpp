#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    // code goes here
    int n;
    cin>>n;
    vector<int> arr(n),nse(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];

    stack<int> nse_st;
    for(int i=0;i<n;i++)
    {
        if(nse_st.empty())
        nse_st.push(i);
        else if(arr[nse_st.top()]<=arr[i])  
        {
            nse_st.push(i);
        }
        else
        {
            while(!nse_st.empty() && arr[i]<arr[nse_st.top()])
            {
                nse[nse_st.top()] = i;
                nse_st.pop();
            }
            nse_st.push(i);
        }
    }
    while(!nse_st.empty())
    {
        nse[nse_st.top()] = -1;
        nse_st.pop();
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"-> "<<nse[i]<<endl;
    }
    
    return 0;
}