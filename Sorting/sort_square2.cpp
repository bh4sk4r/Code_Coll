#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    int p1=-1,p2,c=0;
    vector<int> arr(n),ans(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        p1=i;
    }
    p2 = p1+1;
    while(p2<n && p1>=0)
    {
        int s1 = arr[p1]*arr[p1];
        int s2 = arr[p2]*arr[p2];
        if(s1<=s2)
        {
            ans[c++] = s1;
            p1--;
        }
        else
        {
            ans[c++] = s2;
            p2++;
        }
    }
    while(p1>=0)
    {
        ans[c++] = arr[p1]*arr[p1];
        p1--;
    }
    while(p2<n)
    {
        ans[c++] = arr[p2]*arr[p2];
        p2++;
    }
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    return 0;
}