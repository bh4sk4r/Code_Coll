#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int findRepeat(vector<int> arr,int l,int h)
{
    int m;
    while(l<=h)
    {
        m = l+(h-l)/2;
        if(arr[m]==m)
        h=m-1;
        else
        {
            if(arr[m+1]==arr[m])
            return m;
            else
            l = m+1;
        }
    }
    return -1;
}
int main()
{
    fastio;
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    cin>>arr[i];

    int idx = findRepeat(arr,0,N-1);
    cout<<arr[idx-1];
    return 0;
}