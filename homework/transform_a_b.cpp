#include <bits/stdc++.h>
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int flag = 0;
void transform(ll a, ll &b, vector<int> &ans, int i)
{
    if (a == b)
    {
        flag = 1;
        ans[i] = a;
        cout << "YES" << endl;
        cout<<i+1<<endl;
        for (int j=0;j<=i;j++)
        {
            cout << ans[j] << " ";
        }
        return;
    }
    if (a > b)
        return;
    ans[i] = a;
    transform(a * 2, b, ans, i + 1);

    transform(a * 10 + 1, b, ans, i + 1);
}
int main()
{
    fastio;
    ll a, b;
    int i = 0;
    cin >> a >> b;
    int size = log2(b) + 1;
    vector<int> ans(size);
    transform(a, b, ans, i);
    if (flag == 0)
        cout << "NO";
    return 0;
}