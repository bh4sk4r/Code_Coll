#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool check_sa(vector<int>& a,int k,int x)
{
    int sum=0;
    for(int i=0;i<k;i++)
    sum+=a[i];
    if(sum>x)
    return false;
    for(int i=k;i<a.size();i++)
    {
        sum+=a[i];
        sum-=a[i-k];
        if(sum>x)
        return false;
    }
    return true;

}

int sol(vector<int> &pref, int l, int h, int x)
{
    int m;
    while (l <= h)
    {
        m = l + (h - l) / 2;
        cout << m << " " << check_sa(pref, m, x) << endl;
        if (!check_sa(pref, m, x))
            h = m - 1;
        else
        {
            if(m==pref.size())
            return m;
            if (!check_sa(pref, m + 1, x))
                return m;
            else
                l = m + 1;
        }
    }
}
int main()
{
    fastio;
    // code goes here
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;
    cout << sol(arr, 1, N, x);
    return 0;
}