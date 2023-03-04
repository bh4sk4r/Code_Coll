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
    int a=0,b=1,max_diff = -1;
    for(int i=0;i<N;i++)
    {
        for(int j=N-1;j>i;j--)
        {
            if(arr[j]>=arr[i] && j-i>max_diff)
            {
                a = i;
                b = j;
                max_diff = b-a;
                break;
            }
        }
    }
    cout<<a<<" "<<b<<" "<<arr[a]<<" "<<arr[b]<<" "<<max_diff;
    return 0;
}