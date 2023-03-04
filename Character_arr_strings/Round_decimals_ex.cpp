#include <iostream>
using namespace std;
int main() {
    // your code goes here
	char real_num[10];
	cin>>real_num;
	int di,i=0;
	while(real_num[i]!='.')
	{
		i++;
	}
	di = i;
	char bdc[10];
	for(int j=0;j<di;j++)
	{
		bdc[j] = real_num[j];
	}
	int afd = real_num[di+1]-48;
	int j=0,bdn=0;
	while(bdc[j]!='\0')
	{
		bdn = bdn*10+(bdc[j]-48);
		j++;
	}
	if(afd>=5)
	{
		cout<<bdn+1;
	}
	else
		cout<<bdn;
    return 0;
}
