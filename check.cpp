#include<iostream>
using namespace std;
int main()
{
	char array[10];
		cout<<"enter a line of text:";
	for(int i=0;i<10;i++)
	{
		cin>>array[i];
		cout<<array[i];
	}
	cout<<endl;
	for(int j=9;j>=0;j--)
	{
		cout<<array[j];
	}
}
