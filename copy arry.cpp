#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10];
	for(int i=0;i<10;i++)
	{
		cout<<"enter a number:";
		cin>>a[i];
		
	}
	int j=0;
	for (int i=9;i>=0;i--)
	{
		b[i]=a[j];
		j++;
	}
	for(int i=0;i<10;i++)
	{
		cout<<b[i]<<endl;
	}
 return 0;

}

