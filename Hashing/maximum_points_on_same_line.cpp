#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int gcd(int x,int y)
{
    if(x==0)
    return y;
    if(y==0)
    return x;

    int a = max(x,y);
    int b = min(x,y);

    while(a%b)
    {
        int temp = b;
        b = a%b;
        a = temp;
    }
    return b;
}

void standardise(int& num,int& den)
{
    if(num==0)den=1;
    else if(den==0)num=1;
    else if(den<0)
    {
        num *= -1;
        den *= -1;
    }
}

int main()
{
    fastio;
    int n;
    cin>>n;
    vector<vector<int>> points(n,vector<int> (2));
    for(int i=0;i<n;i++)
    {
        cin>>points[i][0]>>points[i][1];
    }
    int ans=1;
    map<pair<int,int>,int> m;

    for(int i=0;i<n;i++)
    {
        int olp=0, maxm=0;
        for(int j=i+1;j<n;j++)
        {
            if(points[i][0]==points[j][0] && points[i][1]==points[j][1])
            olp++;
            else
            {
                int xdiff = points[j][0]-points[i][0];
                int ydiff = points[j][1]-points[j][1];
                int g = gcd(abs(xdiff),abs(ydiff));
                int f = xdiff/g , s = ydiff/g;
                standardise(f,s);

                if(m.find({f,s})!=m.end())
                m[{f,s}]++;
                else
                m[{f,s}] = 1;

                maxm = max(maxm,m[{f,s}]);
            }
        }
        ans = max(ans,maxm + olp + 1);
        m.clear();
    }
    cout<<ans<<endl;
    return 0;
}