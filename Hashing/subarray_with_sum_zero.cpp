#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool sol(vector<int>& arr,int n)
{
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        if(m[arr[i]]==1)
        return true;
        m[arr[i]]++;
    }
    return false;
}
int main()
{
    fastio;
    int n;
    cin>>n;
    int elem,prev=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>elem;
        arr[i] = elem+prev;
        prev = arr[i];
    }
    
    return 0;
}