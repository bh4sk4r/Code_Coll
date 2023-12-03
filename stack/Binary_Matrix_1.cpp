#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mat(m, vector<int> (n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        int sum=0,j=m-1;
        while(j>=0 && mat[j][i]==1)
        {
            sum+=mat[j][i];
            j--;
        }
        mat[m-1][i] = sum;      
    }
    
    vector<int> ht(n);
    for(int i=0;i<n;i++)
    {
        ht[i] = mat[m-1][i];
    }
    
    vector<int> nse(n),pse(n);
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++)
    {
        while(!st.empty() && ht[i]<ht[st.top()])
        {
            nse[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        nse[st.top()] = n;
        st.pop();
    }
    st.push(n-1);
    for(int i=n-2;i>=0;i--)
    {
        while(!st.empty() && ht[i]<ht[st.top()])
        {
            pse[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        pse[st.top()] = -1;
        st.pop();
    }
    int max_area = INT_MIN,area;
    for(int i=0;i<n;i++)
    {
        max_area = max(max_area,(nse[i]-pse[i]-1)*ht[i]);
    }
    cout<<max_area<<endl;
    return 0;
}