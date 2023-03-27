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
    int diff;
    cin>>diff;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    sort(arr.begin(),arr.end());
    int i=0,j=1,ctr=0;
    while(j<n)
    {
        int curr_diff = arr[j]-arr[i];
        if(curr_diff<diff)
        j++;
        else if(curr_diff>diff)
        {
            i++;
            if(i==j)
            j++;
        }
        else
        {
            int v1 = arr[i],v2 = arr[j],c1=0,c2=0;
            while(i<j && arr[i]==v1)
            {
                c1++;
                i++;
            }
            while(j<n && arr[j]==v2)
            {
                c2++;
                j++;
            }
            if(diff)
            ctr+=c1*c2;
            else
            {
                ctr += ((c1+c2)*(c1+c2-1)/2);
            }
        }
    }
    cout<<ctr;
    return 0;
}