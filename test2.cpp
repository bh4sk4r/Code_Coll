#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    stack<string> st;
    string path;
    cin>>path;
    string f;
    for (int i = 0; i < path.size();)
    {
        if (path[i] == '/')
        {
            i++;
            continue;
        }
        else
        {
            f = "";
            while (i < path.size() && path[i] != '/')
            {
                f += path[i];
                i++;
            }
            if (f == ".")
                continue;
            else if (f == "..")
                st.pop();
            else
            {
                st.push(f);
            }
        }
    }
    string ans;
    ans = "/";
    stack<string> ans_st;
    while (!st.empty())
    {
        ans_st.push(st.top());
        st.pop();
    }
    while (!ans_st.empty())
    {
        ans += ans_st.top();
        ans_st.pop();
        ans += "/";
    }
    ans.pop_back();
    cout<<ans;
    return 0;
}