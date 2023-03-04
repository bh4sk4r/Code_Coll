#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int N,xsum=0,ysum=0;
    cin>>N;
    vector<int> x(N);
    vector<int> y(N);
    for(int i=0;i<N;i++)
    {
        cin>>x[i];
        xsum+=x[i];
    }

    for (int i = 0; i < N; i++)
    {
        cin >> y[i];
        ysum+=y[i];
    }

    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    //vector<int> suff_xsum(N,0),suff_ysum(N,0);
    //suff_xsum[N-1] = x[N-1];
    //suff_ysum[N-1] = y[N-1];
    long long ans = 0;
    //int diff=0;
    for(int i=0;i<=N;i++)
    {
        xsum-=x[i];
        ans += xsum-(N-1-i)*x[i];
        ysum-=y[i];
        ans += ysum-(N-1-i)*y[i];
    } 
    cout<<ans<<endl;

    return 0;
}