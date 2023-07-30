#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter 1st value:";
	cin>>a;
	cout<<"enter 2nd value:";
	cin>>b;
	((a>b)  && (a>c))?cout<<a<<"=a is large":cout<<b<<"=b is larger";
}
