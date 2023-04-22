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
        int n;
        cin>>n;
        int total = 4*n-1;
        vector<int> x(total);
        vector<int> y(total);
        for(int i=0;i<total;i++)
        {
            cin>>x[i]>>y[i];
        }
        int ansx=0,ansy=0;
        for(int i=0;i<x.size();i++)
        {
            ansx = ansx^x[i];
        }
        for(int i=0;i<y.size();i++)
        {
            ansy = ansy^y[i];
        }
        cout<<ansx<<" "<<ansy<<endl;
    }
    return 0;
}