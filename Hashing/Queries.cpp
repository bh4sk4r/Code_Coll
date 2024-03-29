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
    unordered_map<int,int> hash;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        hash[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin >> x;
        if (hash[x])
            cout << "True"<<endl;
        else
            cout << "False"<<endl;
    }
    
    return 0;
}