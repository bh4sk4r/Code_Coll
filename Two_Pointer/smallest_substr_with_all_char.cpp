#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string s,t;
    cin>>s>>t;
    int uniq=0,st,en,min_len;
    vector<int> freqs(256,0),freqt(256,0);
    for(int i=0;i<t.size();i++)
    {
        if(!freqt[t[i]])
        uniq++;
        freqt[t[i]]++;
    }
    int i,j,ctr=0;
    for(i=0;i<s.size();i++)
    {
        freqs[s[i]]++;
        if(freqs[s[i]]==freqt[s[i]])
        ctr++;

        if(ctr==uniq)
        break;
    }
    
    if(i==s.size())
    cout<<"";
    else
    {
        j=0;
        min_len = i-j+1,st=0,en=i;
        
        while(i<s.size())
        {
            //cout<<min_len<<" "<<j<<" "<<i<<endl;
            if(freqs[s[j]]>freqt[s[j]])
            {
                freqs[s[j]]--;
                j++;
            }
            else if(freqt[s[j]]==freqs[s[j]])
            {
                i++;
                if(i<s.size())
                {
                    freqs[s[i]]++;
                }
                int diff = i - j;
                if (diff < min_len)
                {
                    min_len = diff;
                    st = j, en = i - 1;
                }
            }
        }
        for (int k = st; k <=en; k++)
        {
            cout << s[k];
        }
    }
    
    return 0;
}