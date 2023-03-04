#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void func(int& x)
{
    cout<<x<<" ";
    if(x>=3)
    return;
    x++;
    func(x);
    x++;
    func(x);
}
int main()
{
    fastio;
    // code goes here
    int x=0;
    func(x);
    return 0;
}