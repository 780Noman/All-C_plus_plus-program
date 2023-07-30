#include<iostream>
using namespace std;
int main()
{
	int checknum(int);
	int n;
	cout<<"enter a number :"<<endl;
	cin>>n;
	cout<<"the given number is :";
	checknum(n);
	return 0;
}
int checknum(int num)
{
	if(num>=0)
	{
		cout<<"positive";
	}
	else
	{
		cout<<"negative";
	}
	
}
