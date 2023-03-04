#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void func(int& x,int N)
{
    if(x==0)
    return;
    cout << x << " ";
    if(x==N)
    return;
    x++;
    func(x,N);
}
int main()
{
    fastio;
    // code goes here
    int x=1,N=5;
    func(x,N);
    return 0;
}