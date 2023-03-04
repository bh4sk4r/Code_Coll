#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
vector<int> ins_sort(vector<int>& arr)
{
    for(int i=1;i<arr.size();i++)
    {
        int j =i;
        while(j>0 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    return arr;
}

int main()
{
    fastio;
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    cin>>arr[i];

    ins_sort(arr);
    for(int i=0;i<N;i++)
    cout<<arr[i]<<" ";
    return 0;
}