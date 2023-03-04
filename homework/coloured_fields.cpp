#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n,m,k,t,a,b;
    cin>>n>>m>>k>>t;
    vector<int> waste;
    for(int i=0;i<k;i++)
    {
        cin>>a>>b;
        waste.push_back((a-1)*m+b);
    }
    sort(waste.begin(),waste.end());
    while(t--)
    {
        int i,j;
        cin>>i>>j;
        int val = (i-1)*m+j,diff;
        if(binary_search(waste.begin(),waste.end(),val))
        cout<<"Waste"<<endl;
        else
        {
            diff = upper_bound(waste.begin(),waste.end(),val)-waste.begin();
            if((val-diff)%3==0)
            cout<<"Grapes"<<endl;
            else if((val-diff)%3==1)
            cout<<"Carrots"<<endl;
            else
            cout<<"Kiwis"<<endl;
        }
    }

    return 0;
}