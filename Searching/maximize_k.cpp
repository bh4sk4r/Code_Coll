#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool check_sa(vector<int>& a, int k,int x)
{
    int n = a.size();
    int prev=0;
    for(int i=0;i<=(n-k);i++)
    {
        if((a[i+k-1]-prev)>x)
        return false;
        prev=a[i];
    }
    return true;
}

int sol(vector<int>& pref, int l,int h,int x)
{
    int m;
    while(l<=h)
    {
        m = l+(h-l)/2;
        cout<<m<<" "<<check_sa(pref,m,x)<<endl;
        if(!check_sa(pref,m,x))
        h = m-1;
        else
        {
            if(!check_sa(pref,m+1,x))
            return m;
            else
            l = m+1;
        }
    }
}
int main()
{
    fastio;
    // code goes here
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    vector<int> prefix(N);
    prefix[0] = arr[0];
    int x;
    cin >> x;

    for(int i=1;i<N;i++)
    prefix[i] = prefix[i-1] + arr[i];

    cout<<sol(prefix,1,N,x);
    return 0;
}