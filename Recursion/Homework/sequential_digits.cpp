#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
vector<int> ans;
int digitcount(int num)
{
    int ctr=0;
    while(num!=0)
    {
        ctr++;
        num/=10;
    }
}
void seq(int j,int i,int num,int low,int high)
{
    if(num>=low && num<=high)
    ans.push_back(num);

    if(i==0)
    return;
    j++;
    seq(j,i-1,num*10+j,low,high);
}
int main()
{
    fastio;
    int low,high;
    cin>>low>>high;
    int digit_high = digitcount(high);
    for(int j=1;j<=digit_high;j++)
    {
        seq(j,digit_high-1,j,low,high);
    }
    for(int k=0;k<ans.size();k++)
    {
        cout<<ans[k]<<" ";
    }
    return 0;
}