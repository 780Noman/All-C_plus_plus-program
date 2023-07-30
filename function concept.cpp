#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int s(int ,int );
	int subtract(int ,int );
	float divide(int ,int );
	void star(char,int);
	star('*',20);
	cout<<endl;
	cout<<"welcome to function"<<endl;
    star('#',30);
    cout<<endl;
    cout<<"This is a piece of code."<<endl;
    star('%',40);
    cout<<endl;
    int a,b,c,d;
    cout<<"enter a first number:"<<endl;
    cin>>a;
    cout<<"enter a second number:"<<endl;
    cin>>b;
    c=s(a,b);
    d=subtract(a,b);
    float f=divide(a,b);
    cout<<"sum= "<<c<<endl;
    cout<<"subtraction= "<<d<<endl;
    cout<<"division="<<float(f)<<endl;
    return 0;
}
void star(char ch,int n)
{
	for(int i=0;i<=n;i++)
	{
		cout<<ch;
	}
}
int s(int x,int y)
{
	int s;
	s=x+y;
	return s;
}
int subtract(int y,int z)
{
	int ss=y-z;
	return ss;
}
float divide(int a,int b)
{
	float dd=float(a/b);
	return dd;
}
