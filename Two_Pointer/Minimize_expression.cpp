#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n,m,p;
    cin>>n>>m>>p;
    vector<int> A(n), B(m), C(p);
    for(int i=0;i<n;i++)
    cin>>A[i];

    for(int i=0;i<m;i++)
    cin>>B[i];

    for(int i=0;i<p;i++)
    cin>>C[i];

    int i=0,j=0,k=0,val,ans = INT_MAX;
    int m1 = max(A[i],max(B[j],C[k]));
    int m2 = min(A[i],min(B[j],C[k]));
    val = m1-m2;
    while(i<n && j<m && k<p)
    {
        if(A[i] == m2)
        i++;
        else if(B[j] == m2)
        j++;
        else
        k++;
        m1 = max(A[i], max(B[j], C[k]));
        m2 = min(A[i], min(B[j], C[k]));
        val = m1-m2;
        ans = min(ans,val);
    }
    cout<<ans;
    return 0;
}