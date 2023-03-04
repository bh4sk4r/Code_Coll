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
    cin>>arr[i];
    int flag;
    for(int i=0;i<N;i++)
    {
        flag=0;
        for(int j=0;j<N-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=1;
            }

        }
        if(flag==0)
        break;
    }

    for(int i=0;i<N;i++)
    cout<<arr[i]<<" ";

    return 0;
}