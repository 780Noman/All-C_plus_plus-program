#include<iostream>
using namespace std;
int main()
{
	void process(int ,int ,int* ,int*);
	int a,b,s,d;
	cout<<"enter a first number: "<<endl;
	cin>>a;
	cout<<"enter a second number: "<<endl;
	cin>>b;
	process(a,b,&s,&d);
	cout<<"Sum = "<<s<<endl;
	cout<<"Difference = "<<d<<endl;
}
void process(int x,int y,int* s,int* d)
{
	*s=x+y;
	*d=x-y;
}
