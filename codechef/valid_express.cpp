#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
string sol(int n,int x)
{
    string ans="";
    if(x<1-n || x>n+1)
    return "-1";
    int ctr=1;

    for(int i=0;i<n;i++)
    {
        if(ctr<x)
        {
            ctr++;
            ans+="+";
        }
        else if(ctr>x)
        {
            ctr--;
            ans+="-";
        }
        else
        ans+="*";
    }
    return ans;
}
int main()
{
    fastio;
    int T;
    cin>>T;
    while(T--)
    {
        int N,X;
        cin>>N>>X;
        cout<<sol(N,X)<<endl;
    }
    return 0;
}