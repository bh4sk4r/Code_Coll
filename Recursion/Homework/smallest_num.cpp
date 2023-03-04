#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int min_sum = INT_MAX;
void smallNum(int calc, vector<int>& choice,vector<char>& op,vector<int>& num,int opi, int numi,int& N)
{
    if(numi==N)
    {
        if(calc<min_sum)
        min_sum=calc;
        return;
    }
    if(numi==0)
    {
        calc=num[numi];
        choice[numi]=1;
        smallNum(calc,choice,op,num,opi,numi+1,N);
        choice[numi]=0;
    }
    if(numi!=0)
    {
        for(int i=numi;i<N;i++)
        {
            if(!choice[i])
            {
                if(op[opi]=='*')
                {
                    calc=calc*num[i];
                    choice[i]=1;
                    smallNum(calc,choice,op,num,opi+1,numi+1,N);
                    choice[i]=0;
                }
                else
                {
                    calc=calc+num[i];
                    choice[i]=1;
                    smallNum(calc, choice, op, num, opi+1, numi + 1, N);
                    choice[i] = 0;
                }
            }
        }
    }
}
int main()
{
    fastio;
    int calc=0;
    vector<int> num(4),choice(4,0);
    int N=4;
    for(int i=0;i<N;i++)
    cin>>num[i];
    vector<char> op(3);
    for(int i=0;i<2;i++)
    cin>>op[i];
    smallNum(calc,choice,op,num,0,0,N);
    cout<<min_sum<<endl;
    return 0;
}