//brute_force

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
    
    int n = s.size(),max_l=INT_MIN,j;
    for(int i=0;i<n;i++)
    {
        vector<int> freq(256,0);
        for(j=i;j<n;j++)
        {
            if(!freq[s[j]])
            {
                freq[s[j]]++;
            }
            else
            break;
        }
        int l = j-i;
        if(l>max_l)
        max_l = l;
    }
    cout<<max_l;
    return 0;
}