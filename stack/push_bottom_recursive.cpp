#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void PushBottom(int x,stack<int>& s)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }
    int y = s.top();
    s.pop();
    PushBottom(x,s);
    s.push(y);
}
int main()
{
    fastio;
    int n;
    cin>>n;
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        s.push(temp);
    }
    int x;
    cin>>x;
    PushBottom(x,s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}