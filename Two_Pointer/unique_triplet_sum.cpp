#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void pair_sum(vector<int>& arr,int sum,int i)
{
    int n = arr.size();
    int j=n-1;
    while(i<j)
    {
        int csum = arr[i]+arr[j];
        if(csum<sum)
        i++;
        else if(csum>sum)
        j--;
        else
        {
            cout<<-1*sum<<" "<<arr[i]<<" "<<arr[j]<<endl;
            if(arr[i]==arr[j])
            return;
            int x = arr[i],y = arr[j];
            while(arr[i]==x)
            i++;
            while(arr[j]==y)
            j--;
        }
    }
}

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
    cin>>arr[i];

    sort(arr.begin(),arr.end());

    int i=0;
    for(i;i<n;i++)
    {
        if(i>0 && arr[i-1]==arr[i])
        continue;
        else
        {
            int rem = -1*arr[i];
            int p1 = i+1;
            pair_sum(arr,rem,p1);
        }
    }
    return 0;
}