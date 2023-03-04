#include <bits/stdc++.h>
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

ll maxgap(vector<ll> &v1, ll &N, ll &mine)
{
    ll maxm = LONG_MIN;
    ll minm = LONG_MAX;
    for (int i = 0; i < N; i++)
    {
        if (v1[i] < minm)
            minm = v1[i];

        if (v1[i] > maxm)
            maxm = v1[i];
    }
    mine = minm;
    if (N < 2)
        return 0;
    ll gap = (maxm - minm) / (N - 1);
    if ((maxm - minm) % (N - 1) != 0)
        gap++;
    return gap;
}
int main()
{
    fastio;
    int T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;

        vector<ll> arr(N);
        vector<ll> minArr(N, LONG_MAX);
        vector<ll> maxArr(N, LONG_MIN);
        ll prev = LONG_MIN, mine;
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        ll gap = maxgap(arr, N, mine);
        ll ans = LONG_MIN;
        ll bucket;
        if (gap != 0)
        {
            for (int i = 0; i < N; i++)
            {
                bucket = (arr[i] - mine) / gap;
                minArr[bucket] = min(arr[i], minArr[bucket]);
                maxArr[bucket] = max(arr[i], maxArr[bucket]);
            }
            prev = LONG_MIN;
            for (int i = 0; i < N; i++)
            {
                if (minArr[i] == LONG_MAX)
                    continue;
                if (prev == LONG_MIN)
                    prev = maxArr[i];
                else
                {
                    ans = max(minArr[i] - prev, ans);
                    prev = maxArr[i];
                }
            }
        }
        if (gap == 0)
        {
            cout << "0" << endl;
        }
        else
            cout << ans << endl;
    }

    return 0;
}