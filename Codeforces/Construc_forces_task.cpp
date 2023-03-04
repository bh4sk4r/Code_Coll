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
        int N,num=5;
        cin>>N;
        if(N%2==0)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<N;i++)
            {
              cout<<num<<" ";
              num*=(-1);  
            }
            cout<<endl;
        }
        else
        cout<<"NO"<<endl;
    }

    return 0;
}