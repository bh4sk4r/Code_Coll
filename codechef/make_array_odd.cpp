#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int min_op(vector<int>& arr,int odd, int even,int x)
{
    int n = arr.size();
    if(odd==n)
    return 0;
    if(even==n)
    {
        if(x%2==0)
        return -1;
        else
        return ceil(n/2.0);
    }
    if(x%2!=0)
    {
        if(even==1)
        return 1;
        else
        return ceil(even/2.0);
    }

    if(x%2==0)
    return even;
}
int main()
{
    fastio;
    int T;
    cin>>T;
    while(T--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            even++;
            else
            odd++;
        }
        cout<<min_op(arr,odd,even,x)<<endl;
    }
    return 0;
}