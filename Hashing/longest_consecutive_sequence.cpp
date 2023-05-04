//brute force
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
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    sort(arr.begin(),arr.end());
  
    int i=0,j=0,cnt=1,ans=0;
    while(j<n-1)
    {   
        if(arr[j]+1 == arr[j+1])
        {
            j++;
            cnt++;
        }
        else if(arr[j] == arr[j+1])
        j++;
        else
        {
            j++;
            i = j;
            ans = max(ans,cnt);
            cnt=1;
        }
    }
    cout<<ans;
    return 0;
}