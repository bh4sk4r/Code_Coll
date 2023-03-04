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
        int a,b;
        cin>>a>>b;
        float p1,p2;
        p1 = (1-a*0.01)*100;
        p2 = (1-b*0.01)*200;
        cout<<p1<<" "<<p2<<endl;
        if(p1<p2)
        cout<<"FIRST"<<endl;
        else if(p1>p2)
        cout<<"SECOND"<<endl;
        else
        cout<<"BOTH"<<endl;
    }
    return 0;
}