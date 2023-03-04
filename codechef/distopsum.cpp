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
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i=0;i<N/2;i++)
        {
            arr[i] = i+1;
            arr[N-i-1] = N/2 + arr[i];
        }
        for(int i=0;i<N;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}