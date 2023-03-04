#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void func(int &N)
{
    if (N == 0)
        return;
    cout << N<<" ";
    N--;
    func(N);
}
int main()
{
    fastio;
    int N = 6;
    func(N);
    return 0;
}