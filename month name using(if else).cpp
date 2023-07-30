#include<iostream>
using namespace std;
int main()
{
	int choice;
    cout<<"enter your choice:";
	cin>>choice;
	if(choice==1)
	cout<<"January:";
	else if(choice==2)
	cout<<"febrary:";
	else if(choice==3)
	cout<<"march:";
	else if(choice==4)
	cout<<"April:";
	else if(choice==5)
	cout<<"May:";
	else if(choice==6)
	cout<<"June:";
	else if(choice==7)
	cout<<"july:";
	else if(choice==8)
	cout<<"August:";
	else if(choice==9)
	cout<<"September:";
	else if(choice==10)
	cout<<"October:";
	else if(choice==11)
	cout<<"November:";
	else if(choice==12)
	cout<<"December:";
	else if(choice>12)
	cout<<"invalid choice:error";
}
