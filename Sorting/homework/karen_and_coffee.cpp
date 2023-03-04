#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;

    int n, k, q, a, b, l, r;

    int M = 2e5 + 5;

    vector<int> arr(200005, 0), ans(200005, 0);

    cin >> n >> k >> q; // getting the recipe_count,

    int maxm = INT_MIN, minm = INT_MAX; // to figure out the range of queries

    while (n--)
    {

        cin >> l >> r; // input of temperatures in n recipes

        minm = min(minm, l);

        maxm = max(maxm, r);

        arr[r]++; // ranged query approach for l & r.

        arr[l - 1]--;
    }

    for (int i = maxm - 1; i >= minm - 1; i--)
    {

        arr[i] = arr[i + 1] + arr[i]; // Suffix sum to store the count of recipes supporting the temperature
    }

    for (int i = max(0, minm - 2); i < max(maxm + 2, M); i++)
    {

        if (arr[i] >= k) // Prefix sum on count of temperatures in atleast admissible 'k' recipes.
            ans[i] = ans[i - 1] + 1;

        else
            ans[i] = ans[i - 1];
    }

    while (q--)
    {

        cin >> a >> b;

        a = max(a, minm); // In case the a & b are beyond the maxm and minm range observed above.

        b = min(b, maxm);

        cout << ans[b] - ans[a - 1] << endl;
    }
    return 0;
}