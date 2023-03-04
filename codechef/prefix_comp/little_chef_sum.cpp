#include <iostream>
#include <climits>
#define ll long long
using namespace std;

int main()
{
    // your code goes here
    ll T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;
        ll A[N], prefix_sum[N] = {0}, suffix_sum[N] = {0};
        for (ll i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        prefix_sum[0] = A[0];
        suffix_sum[N - 1] = A[N - 1];
        for (ll i = 1; i < N; i++)
        {
            prefix_sum[i] = A[i] + prefix_sum[i - 1];
        }
        for (ll j = N - 2; j >= 0; j--)
        {
            suffix_sum[j] = A[j] + suffix_sum[j + 1];
        }
        ll mins = LONG_MAX, min_i;
        for (ll i = 0; i < N; i++)
        {
            if ((prefix_sum[i] + suffix_sum[i]) < mins)
            {
                mins = prefix_sum[i] + suffix_sum[i];
                min_i = i;
            }
        }
        cout << min_i + 1 << endl;
    }
    return 0;
}
