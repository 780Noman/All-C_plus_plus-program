#include<iostream>
using namespace std;
int menu()
{
	
	int n;
	cout<<"Press 1 for add :"<<endl;
	cout<<"Press 2 for sub :"<<endl;
	cout<<"Press 3 for mult :"<<endl;
	cout<<"Press 4 for divide :"<<endl;
	cin>>n;
	return n;
}
int main()
{
	float f;
	int a,b;
	cout<<"Enter a first number: "<<endl;
	cin>>a;
	cout<<"Enter a second number: "<<endl;
	cin>>b;
	int choice=menu();
	switch(choice)
	{
		case '1':
		cout<<"Adding number= "<<a+b;
		break;
		case 2:
		cout<<"Subtracting Number="<<a-b;
		break;
		case 3:
		cout<<"Multiplaying Number="<<a*b;
		break;
		case 4:
		f=a/b;
		cout<<"Dividing Numbers= "<<(float)f;
		break;
		default:
		cout<<"Invalid choice...";
		break;
	}
	return 0;
}
