#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n,max_area=INT_MIN;
    cin>>n;
    vector<int> ht(n);
    for(int i=0;i<n;i++)
    {
        cin>>ht[i];
    }
    for(int i=0;i<n;i++)
    {
        int ref_ht = ht[i];
        int j=i+1,cnt=0;
        while(j<n && ref_ht<=ht[j])
        {
            cnt++;
            j++;
        }
        int k=i-1;
        while(k>=0 && ref_ht<=ht[k])
        {
            cnt++;
            k--;
        }
        int area = (cnt+1)*ref_ht;
        max_area = max(area,max_area);
    }
    cout<<max_area;
    return 0;
}