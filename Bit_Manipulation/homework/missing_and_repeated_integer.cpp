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
    vector<int> arr(n),nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        nums[i] = i+1;
    }

    int totx = 0;
    for(int i=0;i<n;i++)
    {
        totx ^= arr[i];
        totx ^= nums[i];
    }

    int mask=1;
    while(!(mask&totx))
    mask <<= 1;

    int x=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]&mask)
        x ^= arr[i];

        if(nums[i]&mask)
        x ^= nums[i];
    }
    cout<<x<<" "<<(totx^x);
    return 0;
}