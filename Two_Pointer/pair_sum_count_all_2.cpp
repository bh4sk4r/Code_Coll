//using two pointers
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int first_occ(vector<int> &arr, int l, int h, int target)
{
    int n = arr.size();
    int m;
    while (l <= h)
    {
        m = l + (h - l) / 2;
        if (arr[m] > target)
            h = m - 1;
        else if (arr[m] < target)
            l = m + 1;
        else
        {
            if (m == l)
                return m;
            if (arr[m - 1] != target)
                return m;
            else
                h = m - 1;
        }
    }
    return -1;
}
int last_occ(vector<int> &arr, int l, int h, int target)
{
    int n = arr.size();
    int m;
    while (l <= h)
    {
        m = l + (h - l) / 2;
        if (arr[m] > target)
            h = m - 1;
        else if (arr[m] < target)
            l = m + 1;
        else
        {
            if (m == n - 1)
                return m;
            if (arr[m + 1] != target)
                return m;
            else
                l = m + 1;
        }
    }
    return -1;
}

int sol(vector<int>& arr,int sum)
{
    int n = arr.size(),csum,ctr=0;
    int i=0,j=n-1;
    while(i<j)
    {
        csum = arr[i]+arr[j];
        if(csum>sum)
        j--;
        else if(csum<sum)
        i++;
        else
        {
            int x1 = last_occ(arr,i,j-1,arr[i]);
            int x2 = first_occ(arr,i+1,j,arr[j]);
            cout<<i<<" "<<x1<<" "<<j<<" "<<x2<<" ";
            ctr += ((x1-i+1)*(j-x2+1));
            
            i = x1+1;
            j = x2-1;
            cout<<ctr<<" "<<i<<" "<<j<<endl;
        }
    }
    return ctr;
}
int main()
{
    fastio;
    int n,sum;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>sum;
    sort(arr.begin(),arr.end());
    cout<<sol(arr,sum);
    
    return 0;
}