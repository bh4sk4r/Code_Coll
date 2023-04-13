#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string s;
    cin>>s;
    int ctr = 0;
    if (s == "1")
        ctr=0;
    else
    {
        s = "0" + s;
        cout<<s<<endl;
        while (s != "01")
        {
            int i = s.size() - 1;
            cout<<i<<" ";
            if (s[i] == '1')
            {
                while (s[i] != '0')
                {
                    s[i] = '0';
                    i--;
                }
                s[i] = '1';
                cout<<s<<endl;
            }
            else
                {
                    s.pop_back();
                    cout<<s<<endl;
                }
            ctr++;
        }
    }
    cout<<ctr;

    return 0;
}