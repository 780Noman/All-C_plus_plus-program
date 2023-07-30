#include<iostream>
using namespace std;
int main()
{
	int a,b,choice;
	do
	{
	cout<<"enter 1st no:";
	cin>>a;
	cout<<"enter 2nd Number:";
	cin>>b;
	cout<<"1:add \n 2:subtract \n 3:multiply \n 4:divide \n";
	cout<<"enter your choice:";
	cin>>choice;
    switch(choice)
	{
		case '1':
			cout<<a+b;
			break;
		case '2':
			cout<<a-b;
			break;
		case '3':
			cout<<a*b;
		    break;
		case '4':
			cout<<float (a/b);
		case '5':
			break;
    }while(choice!=5);
}

 
