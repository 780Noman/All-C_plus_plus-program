#include<iostream>
using namespace std;
int main()
{
	int sum(int,int);
	int a,b;
	cout<<"enter a number :"<<endl;
	cin>>a;
	printf<<"enter a number :"<<endl;
	cin>>b;
	int s=sum(a,b);
	cout<<"sum="<<s;
	return 0;
}
int sum(int n2,int n1)
{
	int num=n2+n1;
	return num;
}
