#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

bool submatch(vector<int>& a1,vector<int>& a2)
{
	for(int i=0;i<26;i++)
	{
		if(a1[i]!=a2[i])
			return false;
	}
	return true;
}
int main() {
    // your code goes here
	int T;
	cin>>T;
	while(T--)
	{
		bool flag=0;
		string s1,s2;
		cin>>s1;
		cin>>s2;
		vector<int> c1(26,0),c2(26,0);
		for(int i=0;i<s1.size();i++)
		{
			c1[s1[i]-97]++;
		}
		for(int i=0;i<s1.size();i++)
		{
			c2[s2[i]-97]++;
		}
		if(submatch(c1,c2))
		{
			cout<<"True"<<endl;
			continue;
		}
		int k = s1.size();
		for(int i=k;i<s2.size();i++)
		{
			c2[s2[i]-97]++;
			c2[s2[i-k]-97]--;
			if(submatch(c1,c2))
			{
				flag=1;
				cout<<"True"<<endl;
				break;
			}
		}
		if(!flag)
			cout<<"False"<<endl;
	}
    return 0;
}