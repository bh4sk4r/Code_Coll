#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void PushBottom(int x,stack<int> &s)
{
    stack<int> temp;
    int n = s.size();
    while(!s.empty())
    {
        temp.push(s.top());
        s.pop();
    }
    s.push(x);
    while(!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    }
}
int main()
{
    fastio;
    int n;
    cin>>n;
    stack<int> s;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        s.push(temp);
    }
    cin>>temp;
    PushBottom(temp,s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}