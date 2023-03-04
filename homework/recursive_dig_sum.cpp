#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int digitsum(int N)
{
    if(N<10)
    return N;
    return digitsum(N/10)+digitsum(N%10);
}
int main()
{
    fastio;
    int N;
    cin>>N;
    int sum = digitsum(N);
    cout<<sum;
    return 0;
}