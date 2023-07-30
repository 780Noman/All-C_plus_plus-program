#include<iostream>
using namespace std;
int main()
{
	int fact(int );
	int n;
	cout<<"Enter a number: "<<endl;
	cin>>n;
	int num=fact(n);
	cout<<"The factorial of given number is: "<<num;
	return 0;
}
int fact(int n1)
{
	int f=1;
	for(int i=1;i=<n1;i++)
	{
		f=f*i;
	}
	return f;
}
