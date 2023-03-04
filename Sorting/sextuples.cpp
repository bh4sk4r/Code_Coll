#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int first_occ(vector<int> &arr, int l, int h, int key)
{
    int m;
    while (l <= h)
    {
        m = (l + h) / 2;
        if(arr[m]>key)
        h = m-1;
        else if(arr[m]<key)
        l = m+1;
        else
        {
            if(m==0)
            return m;
            if(arr[m-1]!=key)
            return m;
            else
            h = m-1;
        }
    }
    return -1;
}
int last_occ(vector<int> &arr, int l, int h, int key)
{
    int m;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (arr[m] > key)
            h = m - 1;
        else if (arr[m] < key)
            l = m + 1;
        else
        {
            if (m == arr.size()-1)
            return m;
            if (arr[m+1] != key)
            return m;
            else
            l = m+1;
        }
    }
    return -1;
}

int main()
{
    fastio;
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i=0;i<N;i++)
        cin>>arr[i];
        vector<int> LHS,RHS;
        int temp;
        for(int a=0;a<N;a++)
            for(int b=0;b<N;b++)
                for(int c=0;c<N;c++)
                {
                    temp = arr[a]*arr[b]+arr[c];
                    LHS.push_back(temp);
                }
        
        for(int d=0;d<N;d++)
        {
            if(arr[d]==0)
            continue;
            for(int e=0;e<N;e++)
                for(int f=0;f<N;f++)
                {
                    temp = arr[d]*(arr[e]+arr[f]);
                    RHS.push_back(temp);
                }
        }
        sort(RHS.begin(),RHS.end());
        int ctr=0;
        for(int i=0;i<LHS.size();i++)
        {
            int i1 = first_occ(RHS,0,RHS.size()-1,LHS[i]);
            int i2 = last_occ(RHS,0,RHS.size()-1,LHS[i]);
            if(i1!=-1)
            ctr += i2-i1+1;
        }
        cout<<ctr<<endl;
    }
    return 0;
}