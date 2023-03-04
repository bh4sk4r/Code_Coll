#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int maxm(vector<int>& arr,int index,int &max_element)
{
    if(index==0)
    {
        return arr[index];
    }
    max_element =  max(max_element,maxm(arr,index-1,max_element));
    return max_element;
}
int main()
{
    fastio;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int max_element = INT_MIN;
    cout<<maxm(arr,n-1,max_element);
    return 0;
}