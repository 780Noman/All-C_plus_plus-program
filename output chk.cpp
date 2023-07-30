#include<iostream>
using namespace std;
int main()
{
	void ave(float &,int []);
	int value[6];
	float a;
	for(int i=0;i<6;i++)
	{
		cin>>value[i];
	}
	ave(a,value);
	cout<<"the average of max and mini number in array :"<<a;
	return 0;
}
void ave(float &a,int arr[])
{
	int max=arr[0],min=arr[0];
	for(int i=0;i<6;i++)
	{
		if(max<arr[i])
		max=arr[i];
		if(min>arr[i])
		min=arr[i];
	}
	a=(float)(max+min)/2;
}

	

