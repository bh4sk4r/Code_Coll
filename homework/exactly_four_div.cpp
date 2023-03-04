/*#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int maxn=10000;
    vector<int> num(maxn+1,1);
    vector<int> spf(maxn+1,-1);
    for(int i=2;i*i<=maxn;i++)
    {
        if(num[i]==1)
        {
            for(int j=i;i*j<=maxn;j++)
            {
                if(num[i*j]==1)
                {
                    num[i*j]=0;
                    spf[i*j]=i;
                }
            }
        }
    }
    int N,n1,ans=0;
    cin>>N;
    while(N--)
    {
        cin>>n1;
        int sqr = sqrt(n1);
        if(spf[n1/spf[n1]]==-1 && sqr*sqr!=n1)
        {
            ans += (n1 + 1 + spf[n1] + (n1 / spf[n1]));
        }
        
    }
    cout<<ans<<endl;


    return 0;
}*/


#include <bits/stdc++.h>
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool isPrime(int N)
{
    for(int i=2;i*i<=N;i++)
    {
        if(N%i==0)
        return false;
    }
    return true;
}

int main()
{
    fastio;
    int N;
    cin>>N;
    ll ans=0;
    while(N--)
    {
        ll n1;
        cin>>n1;
        int i;
        ll sq = sqrt(n1);
        if(sq*sq!=n1)
        {
            for(i=2;i*i<=n1;i++)
            {
                if(n1%i==0)
                {
                    if(!isPrime(i))
                    continue;
                    else
                    {
                        if(isPrime(n1/i))
                        {
                            ans+=n1+1+i+(n1/i);
                            break;
                        }
                        
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}