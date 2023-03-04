#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int just_greater(vector<int>& arr,int l,int h,int target)
{
    int m;
    while(l<=h)
    {
        m = l+(h-l)/2;
        if(arr[m]<=target)
        h = m-1;
        else
        {
            if(m==arr.size()-1)
            return m;
            if(arr[m+1]<=target)
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

    int k=N-2;
    while(k>=0 && arr[k]>=arr[k+1])
    k--;

    if(k>=0)
    {int idx = just_greater(arr,k+1,N-1,arr[k]);
    swap(arr[k],arr[idx]);

    reverse(arr.begin()+k+1,arr.end());
    for(int j=0;j<N;j++)
    cout<<arr[j]<<" ";
    }
    else
    cout<<"None"<<endl;
    return 0;
}