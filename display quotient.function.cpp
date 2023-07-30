#include<iostream>
using namespace std;
int main()
{
	float calq(int,int);
	int n,n1;
	cout<<"enter a first number:\n";
	cin>>n;
	cout<<"enter a second number:\n";
	cin>>n1;
	float num=calq(n,n1);
	cout<<"The quotent is:\n"<<(float)num;
}
	int calq(int x,int y)
	{
		float q;
		q=(float)x/y;
		return q;
	}

