#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int prev,next,ctr,maxctr=INT_MIN;
    for(int i=0;i<N;i++)
    {
        prev = i,ctr=0;
        if(arr[i]>=0)
        {
            while(next>=0)
            {
                next = arr[prev];
                arr[prev] = (arr[prev] + 1) * (-1);
                ctr++;
                if(next>=0)
                prev = arr[next];
                cout<<prev<<" "<<next<<" "<<ctr<<endl;
            }
        }
        maxctr = max(maxctr,ctr);
    }
    cout<<maxctr<<endl;
    return 0;
}