#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool isValid(vector<int>& mach,int t,int m)
{
    int ctr=0;
    for(int i=0;i<mach.size();i++)
    {
        ctr+=mach[i]/t;
    }
    return ctr<=m;
}
int main()
{
    fastio;
    int n,m,l = INT_MAX;
    cin>>n>>m;
    vector<int> mach(n);
    for(int i=0;i<n;i++)
    {
        cin>>mach[i];
        if(mach[i]<l)
        l = mach[i];
    }
    int h = m*l;

    int mid;
    while(l<=h)
    {
        mid = l+(h-l)/2;
        if(!isValid(mach,mid,m))
        {
            
        }
    }

    return 0;
}