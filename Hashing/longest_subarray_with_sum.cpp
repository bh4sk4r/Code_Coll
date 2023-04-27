// My implementation
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
    int n;
    cin>>n;
    vector<int> sum(n);
    int temp,prev=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        sum[i] = temp + prev;
        prev = sum[i];
    }

    unordered_map<int,int> m;
    int max_len = 0;
    for(int i=0;i<n;i++)
    {
        if(sum[i]==0)
        max_len = max(i+1,max_len);
        else if(m.find(sum[i])==m.end())
        {
            m[sum[i]] = i;
        }
        else
        {
            int len = i-m[sum[i]];
            max_len = max(max_len,len);
        }
    }
    cout<<max_len<<endl;
    return 0;
}