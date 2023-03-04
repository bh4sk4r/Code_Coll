#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin >> N;
        string s;
        cin >> s;
        vector<int> alpha(26, 0);
        vector<int> prefix_d(N);
        int dist = 0;
        for (int i = 0; i < N; i++)
        {
            if (!alpha[s[i] - 'a'])
            {
                dist++;
                alpha[s[i] - 'a']++;
            }
            prefix_d[i] = dist;
        }

        vector<int> alpha1(26, 0);
        int suffix = 0, max_ans = 0, ans;
        for (int i = N - 2; i >= 0; i--)
        {
            if (!alpha1[s[i + 1] - 'a'])
            {
                suffix++;
                alpha1[s[i + 1] - 'a']++;
            }

            ans = prefix_d[i] + suffix;
            if (ans > max_ans)
                max_ans = ans;
        }
        cout << max_ans << endl;
    }
    return 0;
}