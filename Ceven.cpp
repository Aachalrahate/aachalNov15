#include <iostream>
using namespace std;
int main()
{
	int arr[5],i,sum=0;
	cout<<"enter 5 no";
	for(i=0;i<5;i++)
	cin>>arr[i];
	cout<<"\n even no";
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		//cout<<arr[i]<<" ";
		sum=sum+arr[i];
	}
	cout<<sum<<" ";
	cout;
	return 0;
}

