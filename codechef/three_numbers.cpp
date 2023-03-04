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
        int maxm = INT_MIN,minm = INT_MAX,maxctr=0;
        vector<int> arr(3);
        int ans;
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
            if(arr[i]>maxm)
                maxm = arr[i];
            if(arr[i]<minm)
            minm = arr[i];
        }
        for(int i=0;i<3;i++)
        {
            if(arr[i]==maxm)
            maxctr++;
        }
        int diff = maxm-minm;
        if(arr[0]!=arr[1] && arr[1]!=arr[2] && arr[0]!=arr[2])
        cout<<-1<<endl;
        else if(maxctr==2)
        cout<<-1<<endl;
        else if(diff%2!=0)
        cout<<-1<<endl;
        else if(diff%2==0)
        cout<<diff/2<<endl;
    }
    return 0;
}