#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool cmp(string a, string b)
{
    return (a+b)>(b+a);
}
int main()
{
    fastio;
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<string> nums(N);
        for(int i=0;i<N;i++)
        {
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end(),cmp);
        string ans="";
        for(int i=0;i<N;i++)
        {
            ans+=nums[i];
        }
        int ctr=0;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]=='0')
            ctr++;
        }
        if(ctr==ans.size())
        cout<<"0"<<endl;
        else
        cout<<ans<<endl;
    }
    return 0;
}