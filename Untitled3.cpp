#include<iostream>
using namespace std;
int main()
{
	int a,b,choice;
	cout<<"enter 1st value :";
	cin>>a;
	cout<<"enter 2nd value :";
	cin>>b;
	cout<<"enter your choice:"<<endl;
	cin>>choice;
	cout<<"1:add no:"<<endl;
	cout<<"2:multiply:"<<endl;
	cout<<"3:subtraction:"<<endl;
	cout<<"4:divide:"<<endl;
	if(choice==1)
	cout<<"a+b="<<a+b;
	else if(choice==2)
	cout<<"a*b="<<a*b;
	else if(choice==3)
	cout<<"a-b="<<a-b;
	else if(choice ==4)
	cout<<"a/b="<<a/b;
	return 0;
}
