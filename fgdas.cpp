#include<iostream>
using namespace std;
int mul(int,int);
int main()
{
	int a,b;
	cout<<"\n Enter number:";
	cin>>a;
	cout<<"\n enter number:";
	cin>>b;
	int m=mul(a,b);
	cout<<"\n multiply is="<<m;
	return 0;
}
int mul(int a,int b)
{
	int s=a*b;
	return s;
}
