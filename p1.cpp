#include<iostream>
using namespace std;
int main()
{
	float a,b,c,x1,x2;
	cout<<"enter first number:";
	cin>>a;
	cout<<"enter second number:";
	cin>>b;
	cout<<"enter third number:";
	cin>>c;
  float	d=b*b-4*a*c;
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	cout<<x1<<endl;
	cout<<x2;
	

}
