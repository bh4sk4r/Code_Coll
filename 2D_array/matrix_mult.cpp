#include <iostream>
using namespace std;
int main() {
    // your code goes here
	int n1,m1,n2,m2;
	cin>>n1>>m1;
	int A[n1][m1];
	//1st array input
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<m1;j++)
		{
			cin>>A[i][j];
		}
	}
	cin>>n2>>m2;
	int B[n2][m2];
	//2nd array input

	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<m2;j++)
		{
			cin>>B[i][j];
		}
	}
	int prod[n1][m2],flag=0;
	if(m1!=n2)
	{
		flag=1;
		cout<<"IMPOSSIBLE"<<endl;
	}

	else if(m1==n2)
	{
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<m2;j++)
			{
				prod[i][j]=0;
				for(int k=0;k<m2;k++)
				{
					prod[i][j]+=A[i][k]*B[k][j];
				}
			}
		}
	}
	for(int i=0;i<n1;i++)
	{
		if(flag==1)
			break;
		for(int j=0;j<m2;j++)
		{
			cout<<prod[i][j]<<" ";
		}
	}
	return 0;
}
