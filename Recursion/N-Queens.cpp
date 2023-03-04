#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
vector<pair<int,int>> queen;
bool issafe(int i,int j)
{
    for(int k=0;k<queen.size();k++)
    {
        int diffx = queen[k].first-i;
        int diffy = queen[k].second-j;
        if(abs(diffx)==abs(diffy))
        return false;
    }
    return true;
}
void queen_p(int i,vector<int>& map,int N,int q_count)
{
    if(q_count==0)
    {
        vector<vector<char>> qp(N,vector<char> (N,' '));
        for(int k=0;k<queen.size();k++)
        {
            int x=queen[k].first;
            int y=queen[k].second;
            qp[x][y]='Q';
        }
        for(int k=0;k<N;k++)
        {
            for(int l=0;l<N;l++)
            {
                cout<<"|_"<<qp[k][l]<<"_|";
            }
            cout<<endl;
        }
        /*for(int k=0;k<queen.size();k++)
        {
            cout<<queen[k].first<<","<<queen[k].second<<" ";
        }*/
        cout<<endl;
        return;
    }
    for(int j=0;j<N;j++)
    {
        if(!map[j] && issafe(i,j))
        {
            map[j]=1;
            queen.push_back(make_pair(i,j));
            queen_p(i+1,map,N,q_count-1);
            queen.pop_back();
            map[j]=0;
        }
    }
}

int main()
{
    fastio;
    int N;
    cin>>N;
    vector<int> map(N,0);
    queen_p(0,map,N,N);
    return 0;
}