#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void func(int N)
{
    if(N==0)
    return;
    cout<<N<<" ";
    func(N-1);
}
int main()
{
    fastio;
    // code goes here
    int N;
    cin>>N;
    func(N);
    return 0;
}