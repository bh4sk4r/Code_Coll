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
        int i=0;
        while(i<N)
        {
            if(arr[i]!=arr[arr[i]-1] && arr[i]>0 && arr[i]<=N)
            {
                swap(arr[i],arr[arr[i-1]]);
            }
            else
            i++;
        }
        int flag=0;
        for(int i=0;i<N;i++)
        {
            if(arr[i]!=i+1)
            {
                cout<<i+1<<endl;
                flag=1;
                break;
            }
        }
        if(!flag)
        cout<<N+1<<endl;

    }
    return 0;
}