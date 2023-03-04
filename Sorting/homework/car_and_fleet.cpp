#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool cmp(pair<float,int> p1, pair<float,int> p2)
{
    return p1.second<p2.second;
}

int main()
{
    fastio;
    int T;
    cin>>T;
    while(T--)
    {
        int n,target;
        cin>>n>>target;
        vector<int> pos(n),speed(n);
        for(int i=0;i<n;i++)
        cin>>pos[i];

        for(int i=0;i<n;i++)
        cin>>speed[i];

        vector<pair<float,int>> pos_sp;
        float time;
        for(int i=0;i<n;i++)
        {
            time = (target-pos[i])/speed[i]*1.0;
            cout<<time<<endl;
            pos_sp.push_back({time,pos[i]});
        }
        sort(pos_sp.begin(),pos_sp.end(),cmp);
        int fleet=1;
        float prev_t = pos_sp[n-1].first;
        for(int i=0;i<n;i++)
        {
            cout<<pos_sp[i].first<<" "<<pos_sp[i].second<<endl;
        }
        for(int i=n-2;i>=0;i--)
        {
            if(pos_sp[i].first>prev_t)
            {
                fleet++;
                prev_t = pos_sp[i].first;
            }
        }
        cout<<fleet<<endl;
    }
    return 0;
}