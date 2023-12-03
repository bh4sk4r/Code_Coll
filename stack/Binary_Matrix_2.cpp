#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void transform(vector<vector<int>> &mat)
{
    for (int j = 0; j < mat[0].size(); j++)
    {
        for (int i = 1; i < mat.size(); i++)
        {
            if (mat[i][j] != 0)
                mat[i][j] = mat[i - 1][j] + 1;
        }
    }
}
int area(vector<int> &ht)
{
    int col = ht.size();
    vector<int> nse(col), pse(col);
    stack<int> st;
    st.push(0);
    for (int i = 1; i < col; i++)
    {
        while (!st.empty() && ht[st.top()] > ht[i])
        {
            nse[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        nse[st.top()] = col;
        st.pop();
    }

    st.push(col - 1);
    for (int i = col - 2; i >= 0; i--)
    {
        while (!st.empty() && ht[st.top()] > ht[i])
        {
            pse[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        pse[st.top()] = -1;
        st.pop();
    }
    int maxArea = INT_MIN;
    for (int i = 0; i < col; i++)
    {
        maxArea = max(maxArea, (nse[i] - pse[i] - 1) * ht[i]);
    }
    return maxArea;
}

int main()
{
    fastio;
    // code goes here
    int n,m;
    cin>>n>>m;
    vector<vector<int>> mat(n,vector<int> (m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>mat[i][j];
    }
    transform(mat);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<mat[i][j]<<" ";
        cout<<endl;
    }
    int ans = INT_MIN;
    for(int i=0;i<n;i++)
    {
        ans = max(ans,area(mat[i]));
    }
    cout<<ans;
    return 0;
}