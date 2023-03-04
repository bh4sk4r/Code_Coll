#include <bits/stdc++.h>

using namespace std;

bool place_cow(vector<int> &a, int cow, int c)
{
    int prev = a[0];
    int cnt = 1;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] - prev < c)
            continue;
        else
        {
            cnt++;
            prev = a[i];
        }
    }
    return cnt>=cow;
}

int bsearch(vector<int> &a, int cow, int l, int h)
{
    int m;
    while (l <= h)
    {
        m = l + (h - l) / 2;
        bool r = place_cow(a, cow, m);
        if (!r)
            h = m - 1;
        else
        {
            bool r1 = place_cow(a, cow, m + 1);
            if (!r1)
                return m;
            else
                l = m + 1;
        }
    }
}
int main()
{
    // your code goes here
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int T;
    cin >> T;
    int l = a[0];
    int h = a[N - 1];
    while (T--)
    {
        int cow;
        cin >> cow;
        cout << bsearch(a, cow, l, h) << endl;
    }
    return 0;
}