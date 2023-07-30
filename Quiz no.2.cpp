#include<iostream>
using namespace std;
int main()
{
	int n,r;
	float fac(int ,int );
	float fact(int ,int);
	cout<<"enter first num:";
	cin>>n;
	cout<<"enter second num:";
	cin>>r;
	float re=fac(int n,int r);
	float ret=fact(int n,int r);
	cout<<re<<endl;
	cout<<ret<<endl;
}
float fac(int x,int y)
{
	int f=1;
	for(int i=1;i<=x;i++)
	{
		f=f*i;
		x=f;
	}
	int d=x-y;
	for(int i=1;i<=d;i++)
	{
		f=f*i;
		y=f;
	}
	return (float)n/d;
	
}
