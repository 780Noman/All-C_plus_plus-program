#include<iostream>
using namespace std;
int main()
{
	int a,b,choice;
	cout<<"enter 1st value:"<<endl;
	cin>>a;
	cout<<"enter 2nd value:"<<endl;
	cin>>b;
	cout<<"enter your choice:"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"a+b="<<a+b;
			break;
		case 2:
			cout<<"a-b="<<a-b;
			break;
		case 3:
			cout<<"a*b="<<a*b;
			break;
		case 4:
			cout<<"a/b="<<a/b;
			break;
		
		 Default:
		cout<<"The choice is invalid.";
	}
}

