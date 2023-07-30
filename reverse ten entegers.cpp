#include<iostream>
using namespace std;
int main()
{
	int array[10];
	cout<<"enter Ten integers:"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>array[i];
	}
	cout<<endl;
	for(int j=9;j>=0;j--)
	{
	  cout<<array[j];	
	}
	return 0;
}
