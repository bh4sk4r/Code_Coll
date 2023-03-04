#include <bits/stdc++.h>
#define ll long long
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
        vector<ll> arr(N);
        
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int prev = 0,flag=0;
        for(int i=0;i<N;i++)
        {
            if(arr[i]<0)
            continue;
            if((arr[i]-prev)>1)
            {
                cout<<prev+1<<endl;
                flag = 1;
                break;
            }
            prev = arr[i];
        }
        if(flag==0)
        cout<<prev+1<<endl;
    }
    return 0;
}