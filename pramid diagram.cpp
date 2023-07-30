#include<iostream>
using namespace std;
int main()
{
	int s=0;
	for(int i=1;i<=5;i++)
	{
	for(int j=i;j<5;j++)
	{
	cout<<" ";
	}	
	for(int k=0;k<=s;k++)
	{
	cout<<"*";
	}
	cout<<endl;
	s=s+2;
	}
}
