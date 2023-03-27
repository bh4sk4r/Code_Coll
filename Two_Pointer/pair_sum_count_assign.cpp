#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    // your code goes here
    ll n;
    ll k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    ll i = 0, j = n - 1, ctr = 0;
    while (i < j)
    {
        ll csum = arr[i] + arr[j];
        if (csum < k)
            i++;
        else if (csum > k)
            j--;
        else
        {
            ll c1 = 0, c2 = 0, v1 = arr[i], v2 = arr[j];
            if (v1 == v2)
            {
                ll c3 = j - i + 1;
                ctr += c3 * (c3 - 1) / 2;
                break;
            }
            while (arr[i] == v1)
            {
                c1++;
                i++;
            }
            while (arr[j] == v2)
            {
                c2++;
                j--;
            }
            ctr += c1 * c2;
        }
    }
    cout << ctr;
    return 0;
}