#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void func(int x)
{
    cout<<x<<" ";
    if(x>=3)
    return;
    func(x+1);
    func(x+2);
}
int main()
{
    fastio;
    func(0);
    return 0;
}