#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string s;
    cin>>s;
    int i=0,j=0,ans=1,n = s.size();
    vector<int> freq(256,0);
    while(j<n-1)
    {
        if(!freq[s[j+1]])
        {
            j++;
            freq[s[j]]++;
        }
        else
        {
            freq[s[i]]--;
            i++;
        }
        ans = max(ans,j-i+1);
    }
    cout<<ans;
    return 0;
}