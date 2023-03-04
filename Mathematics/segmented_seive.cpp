#include <bits/stdc++.h>
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int N = 1000000;
    int n = sqrt(N);
    int arr[n+1]={0};
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i;i*j<=n;j++)
            {
                arr[i*j] = 1;
            }
        }

    }
    vector <int> primes;
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
        primes.push_back(i);
    }
    int q;
    cin>>q;
    while(q--)
    {
        ll L,R;
        cin>>L>>R;
        int prime_sq = sqrt(R);
        int rep[R-L+1];
        for(ll i=L;i<=R;i++)
        {
            rep[i-L] = 0;
        }
        for(int i=0;primes[i]<=prime_sq;i++)
        {
            int mul = (int)ceil(L*1.0/primes[i]);
            if(mul<2)
            mul=2;
            for(int j=mul;primes[i]*j<=R;j++)
            {
                rep[primes[i]*j-L] = 1;
            }

        }
        for(int i=0;i<=R-L;i++)
        {
            if(rep[i]==0)
            cout<<i+L<<" ";
        }        
    }

}