#include<iostream>
using namespace std;
int main()
{
	int a[4];
	for(int i=0;i<4;i++)
	{
		cin>>a[i];
	}
	int max=a[0];
	for(int i=0;i<4;i++)
	{
		if(a[i]>max)
		max=a[i];   
	}
	cout<<"The greater value in given array is: "<<max;

}
