#include<iostream>
using namespace std;
int sum(int ,int);
int main()
{
	int subtract(int ,int);
    int sum(int ,int);
    float divide(int ,int);
    int multiply(int ,int);
	int a,b;
	cout<<"Enter a first num:";
	cin>>a;
	cout<<"Enter a second num:";
	cin>>b;
	int c=sum(a,b);
	int d=subtract(a,b);
	float e=divide(a,b);
	int f=multiply(a,b);
	cout<<"Sum="<<c<<endl;
	cout<<"Subtract="<<d<<endl;
	cout<<"Divide="<<e<<endl;
	cout<<"Multiply="<<f;
}
	int sum(int x,int y)
	   {
	    int s;
		 s=x+y;
		return s;
		}
	int subtract(int x,int y)
	{
		return x-y;
	}
	float divide(int x,int y)
	{
		return (float)x/y;
	}
	int multiply(int x,int y)
	{
	return	(x*y);
	
	}
