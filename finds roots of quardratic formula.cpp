#include<iostream>
using namespace std;
int main()
{
	int a,b,c,x1,x2,d;
	cout<<"enter 1st value:";
	cin>>a;
	cout<<"enter 2nd value:";
	cin>>b;
	cout<<"enter 3rd value:";
	cin>>c;
	d=b*b-4*a*c;
	if(d<0)
	{ 
	cout<<"roots are imagnary.";
	}
	else if(d==0)
	cout<<"roots are equal."<<endl;
	x1=-b/(2*a);
	cout<<x1;
	else 
	{
	x1=(-b+sqrt(d))/(2*a)<<endl;
	x2=(-b-sqrt(d))/(2*a);
	cout<<x1<<endl;
	cout<<x2;
}

	
	
}
