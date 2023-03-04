#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
char comp(char a)
{
    if(a=='+')
    return '-';
    
    else if(a=='-')
    return '+';
}
int main()
{
    fastio;
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x,flag=0,ctr=0;
        char prev;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            ctr++;
            else
            {
                x=i;
                prev=s[x];
                //cout<<x<<" "<<s[x]<<endl;
                ctr=0;
                break;
            }
        }
        if(ctr==n)
        cout<<ctr<<endl;
        else
        {
            int i = x+1,diff;
            while(i<n)
            {
                if(s[i]==comp(prev))
                {
                    diff = x-i;
                    prev = s[i];
                    x=i;
                    if(diff%2==0)
                    {
                        ctr++;
                    }
                }
                else if(s[i]==prev)
                x=i;

                i++;
            }
            cout<<ctr<<endl;
        }

    }
    return 0;
}