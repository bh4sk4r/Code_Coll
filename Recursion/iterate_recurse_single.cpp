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
    func(N-1);
    cout<<N;
}
int main()
{
    fastio;
    int N=6;
    func(N);
    return 0;
}