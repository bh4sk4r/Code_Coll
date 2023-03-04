#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int N,i;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    cin>>arr[i];

    bool done = false;
    while(!done)
    {
        done = true;
        i=0;
        while(i<N-2)
        {
            if(arr[i]>arr[i+2])
            {
                swap(arr[i],arr[i+2]);
                done = false;
            }
            i++;
        }
    }

    for(int i=0;i<N;i++)
    cout<<arr[i]<<" ";
    return 0;
}