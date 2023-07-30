#include<iostream>
using namespace std;
void sum()
{
	int n1,n2;
	cout<<"Enter first Number:\n";
	cin>>n1;
	cout<<"Enter second Number:\n";
	cin>>n2;
	cout<<"Sum ="<<n1+n2<<endl;
}
void subtract()
{
	int x,y;
	cout<<"enter first no.\n";
	cin>>x;
	cout<<"enter second no.\n";
	cin>>y;
	cout<<"subtract ="<<x-y<<endl;
}
void multiply()
{
	int n1,n2;
	cout<<"Enter first Number:\n";
	cin>>n1;
	cout<<"Enter second Number:\n";
	cin>>n2;
	cout<<"Multiply ="<<n1*n2<<endl;
}
void divide()
{
	int n1,n2;
	cout<<"Enter first Number:\n";
	cin>>n1;
	cout<<"Enter second Number:\n";
	cin>>n2;
	cout<<"Divide ="<<float (n1/n2)<<endl;
}	
int main()
{
	int choice;
	while(1)
	{
	cout<<"Press 1 to sum of number."<<endl;
	cout<<"Press 2 to subtract of number."<<endl;
	cout<<"Press 3 to multiply of number."<<endl;
	cout<<"Press 4 to divide of number."<<endl;
	cout<<"Enter your choice :";
	cin>>choice;
	if(choice==1)
	sum();
   else	if(choice==2)
   subtract();
   else if(choice==3)
    multiply();
   else if(choice==4)
     divide();
   else
   {
   cout<<"invalid choice";
   break;
   }
  }
}

