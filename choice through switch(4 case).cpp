#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char  choices;
    float r;
	cout<<"enter 1st value:";
	cin>>a;
	cout<<"enter  2nd value:";
	cin>>b;
	cout<<"choices.....:"<<endl;
	cout<<"1:add\n 2:subtraction\n 3:divede\n 4:multiplying\n"<<endl;
	cout<<"enter your choices:"<<endl;
	cin>>choices;
	switch(choices)
	{
		case 'a':
		case 'A':
		case '1':
		case '+':
		   cout<<a+b;
		   break;
		case 's':
		case 'S':
		case '2':
		case '-':
		cout<<a-b;
		 break;
    	case 'd':
		case 'D':
		case '3':
		case '/':
			r=float(a/b);
			cout<<r;
			break;
		case 'm':
		case 'M':
		case '4':
		case '*':
		  cout<<a*b;
		  break;
		
	}
}
	
	
	
	
	
	
	
	

