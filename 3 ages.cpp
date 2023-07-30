#include<iostream>
using namespace std;
int main()
{
	int o,y,a;
	cout<<"enter ages:";
	cin>>a>>y>>o;
	if(a>y && a>o)
	cout<<a;
	else if(o>y && o>a)
	cout<<o;
	else if(y>o && y>a)
	cout<<y;
}
