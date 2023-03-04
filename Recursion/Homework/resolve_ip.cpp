#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

string substring(string s, int i, int j)
{
    string temp = "";
    for (int k = i; k < j; k++)
    {
        temp += s[k];
    }
    return temp;
}

bool isvalid(string s, int i, int j)
{
    string temp = substring(s, i, j);
    if (temp.size() > 3)
        return false;

    if (stoi(temp) > 255)
        return false;

    if (temp.size() > 1 && temp[0] == '0')
        return false;

    return true;
}

void ip(string s, int i, int par, string ans)
{
    if (i >= s.size() || s.size()>12)
        return;

    if (par == 4)
    {
        cout << ans << endl;
        return;
    }
    string temp = "";

    if (par == 3)
    {
        if (isvalid(s, i, s.size()))
        {
            temp = substring(s, i, s.size());
            ip(s, i, par + 1, ans + temp);
        }
    }
    else
    {
        if (isvalid(s, i, i + 1))
        {
            temp = substring(s, i, i + 1);
            ip(s, i + 1, par + 1, ans + temp + ".");
        }
        if (isvalid(s, i, i + 2))
        {
            temp = substring(s, i, i + 2);
            ip(s, i + 2, par + 1, ans + temp + ".");
        }
        if (isvalid(s, i, i + 3))
        {
            temp = substring(s, i, i + 3);
            ip(s, i + 3, par + 1, ans + temp + ".");
        }
    }
}
int main()
{
    fastio;
    string s;
    cin >> s;
    ip(s, 0, 0, "");
    return 0;
}