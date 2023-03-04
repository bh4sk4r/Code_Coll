#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    // code goes here
    vector<int> arr;
    for(int i=0;i<5;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<typeid(arr.size()).name();
    }
    return 0;
}