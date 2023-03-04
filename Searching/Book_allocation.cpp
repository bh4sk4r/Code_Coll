#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool isPossible(vector<int>& pages,int up_cap,int avail_stud)
{
    int sum=0,student_count=1;
    for(int i=0;i<pages.size();i++)
    {
        if(sum+pages[i]>up_cap)
        {
            student_count++;
            sum=pages[i];
        }
        else
        sum+=pages[i];
    }
    return student_count<=avail_stud;
}

int bsearch(vector<int>& pages,int l, int h,int avail_stud)
{
    int m;
    while(l<=h)
    {
        m = l + (h-l)/2;
        bool r = isPossible(pages,m,avail_stud);
        if(!r)
        l = m+1;
        else
        {
            bool r1 = isPossible(pages,m-1,avail_stud);
            if(!r1)
            return m;
            else
            h = m-1;
        }
    }
}

int main()
{
    fastio;
    int N,low = INT_MIN,high=0;
    cin>>N;
    vector<int> pages(N);
    for(int i=0;i<N;i++)
    {
        cin>>pages[i];
        if(low<pages[i])
        low = pages[i];

        high+=pages[i];
    }

    int avail_stud;
    cin>>avail_stud;
    
    cout<<bsearch(pages,low,high,avail_stud);
    return 0;
}