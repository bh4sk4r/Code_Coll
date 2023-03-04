#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int min_op(vector<int> map)
{
    if(map[0]==0)
    return 1;
    if(map[1]==0)
    return 0;
    if(map[0]>=map[1])
    return map[1];
    if(map[1]>map[0])
    return map[0]+1;
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
        string s;
        cin>>s;
        vector<int> map(2,0);
        for(int i=0;i<N;i++)
        {
            if(s[i]=='0')
            map[0]++;
            else
            map[1]++;
        }
        int ans = min_op(map);
        cout<<ans<<endl;
    }
    return 0;
}