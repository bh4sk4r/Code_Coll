/* Moore’s Voting Algorithm finds the majority element in a homogenous array in a single pass, with constant space. It’s easy to see why that’s optimal in both space and time. The algorithm is based on a neat insight that’s easy to derive and implement. This post explains that insight. The algorithm follows naturally. Without further ado:

A majority element occurs in more than half the indices in an array. So if an array has n elements and k of them are the majority elements, then kn≥12. Iterate over the array. If two elements are unequal, remove them from the array. This is the insight: the majority element won’t change after removing those two unequal elements. Why? Because by crossing out the two elements, you either decreased one instance of the majority element, or zero. Not two — because the elements are unequal.

If neither of the two crossed-out elements were the majority element the former majority element’s new ratio in the new array is kn−2. This is ≥kn (smaller denominator), which was already ≥12. And if we did remove a majority element instance, the new ratio is k−1n−2. Is the new ratio greater than the old ratio, smaller than it, or equal to it, or does it depend on the values of n and k? Derivation time:

k−1n−2≈kn=>kn−n≈kn−2k=>2k≈n=>kn≈12
The ≈ can be replaced by a ≥, and we’re done. The new ratio is greater than the old one (regardless of what k and n were), and the old one was greater than 1/2. So the former majority element is the new majority element. Neat.

The algorithm follows. We maintain a counter variable starting from 1 and decrement it when we see an element not equal to the current majority candidate. We increment it when we see the current majority candidate again. This generalises the idea of cancelling two elements. Here’s some Python code for finding the majority element in an array guaranteed to have one.*/



#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int cnt=0,res;
    for(int i=0;i<N;i++)
    {
        if(cnt==0)
        {
            res = arr[i];
        }
        if(res!=arr[i])
        cnt--;
        else
        cnt++;
    }
    int fctr=0;
    for(int i=0;i<N;i++)
    {
        if(res==arr[i])
        fctr++;

        if(fctr>N/2)
        {
            cout<<res<<endl;
            break;
        }
    }
    return 0;
}