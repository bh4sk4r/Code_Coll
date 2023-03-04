#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        char arr[n];
        cin >> arr;

        int fc = 0;
        int i, j, ctr = 0, max_ctr = 0;
        for (int k = 0; k < n; k++)
        {
            if (arr[k] == '1')
                fc++;
            else
            {
                i = k;
                j = i;
                break;
            }
        }

        while (i < n && j < n)
        {
            if (arr[i] == '0')
            {
                i++;
                j++;
            }
            else if (arr[i] == '1')
            {
                if (arr[j] == '1')
                {
                    ctr++;
                    j++;
                }
                else if (arr[j] == '0')
                {
                    if (ctr > max_ctr)
                        max_ctr = ctr;
                    ctr = 0;
                    i = j + 1;
                    j = i;
                }
            }
        }
        cout << max_ctr + fc << endl;
    }
    return 0;
}
