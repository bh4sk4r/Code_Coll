#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int flag = 0;
        string s;
        cin>>s;
        
        for(int i=0;i<N-1;i++)
        {
            if(s[i]=='R' && s[i+1]=='L')
            {
                flag=1;
                cout<<0<<endl;
                break;
            }
            else if(s[i]=='L' && s[i+1]=='R')
            {
                flag=1;
                cout<<i+1<<endl;
                break;
            }
        }
        if(flag==0)
        cout<<"-1"<<endl;
    }
    return 0;
}