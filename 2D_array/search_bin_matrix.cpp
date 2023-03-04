#include <iostream>
using namespace std;
int main() {
    // your code goes here
	int n,m;
	cin>>n>>m;
	int arr[n*m];
	for(int i=0;i<n*m;i++)
	{
		cin>>arr[i];
	}
	int key;
	cin>>key;
	int prod = n*m;
	int mid = prod/2-1;
	int lower=0,upper=prod-1,flag=0;
  if(prod==1)
  {
    if(arr[0]==key)
    {
      cout<<"true"<<endl;
    }
  }
  if(prod>1)
  {
	while(upper>=lower)
	{

    if(arr[mid]==key)
    {
      cout<<"true";
      flag=1;
      break;
    }

    //cout<<mid<<" "<<lower<<endl;
		if(arr[mid]>key)
		{
			upper=mid-1;
      //cout<<upper<<" "<<lower<<endl;;
		}
		if(arr[mid]<key)
		{
			lower=mid+1;
      //cout<<upper<<" "<<lower<<endl;
		}
      mid = (upper+lower)/2;

	}
}
	if(flag==0)
		cout<<"false";

    return 0;
}
