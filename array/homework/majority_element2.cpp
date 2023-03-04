#include <bits/stdc++.h>
#define ll long long
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
        cin>>N;
        vector<ll> arr(N);
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        ll first,second;
        int count1=0,count2=0;
        for(int i=0;i<N;i++)
        {
            if (first == arr[i])
                count1++;

            else if (second == arr[i])
                count2++;

            else if (count1 == 0)
            {
                count1++;
                first = arr[i];
            }

            else if (count2 == 0)
            {
                count2++;
                second = arr[i];
            }

            else
            {
                count1--;
                count2--;
            }
        }
        count1 = 0;
        count2 = 0;
        for(int i=0;i<N;i++)
        {
            if(arr[i]==first)
            count1++;
            else if(arr[2]==second)
            count2++;

            if(count1>N/3)
            {            
                cout<<first<<endl;
                break;
            }
            else if(count2>N/3)
            {
            cout<<second<<endl;
            break;
            }
            else
            {
            cout<<"-1"<<endl;
            break;
            }
        }
    }

    return 0;
}