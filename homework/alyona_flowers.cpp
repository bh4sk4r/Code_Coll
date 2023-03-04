#include <iostream>
#include <climits>
using namespace std;
int main() {
    // your code goes here
	int n,m,l,r;
	cin>>n>>m;
	int arr[n],pre_sum[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	pre_sum[0]=arr[0];
	int pos_ans=0,neg_ans=INT_MIN;
	for(int i=1;i<n;i++)
	{
		pre_sum[i] = pre_sum[i-1]+arr[i];
	}
	int flag=0;
	for(int i=0;i<m;i++)
	{
		cin>>l>>r;
		int sum;
		l--;
		r--;
		if(l==0)
			sum = pre_sum[r];
		else
			sum = pre_sum[r]-pre_sum[l-1];

		if(sum>=0)
		{
			flag=1;
			pos_ans+=sum;
		}
		else
		{
			if(sum>neg_ans)
				neg_ans = sum;
		}
	}
	if(flag==0)
		cout<<neg_ans;
	else
		cout<<pos_ans;
    return 0;
}
