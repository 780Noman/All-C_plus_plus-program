#include<iostream>
using namespace std;
int main()
{
	int calquotient(int);
	int calremainder(int );
	int a,b;
	cout<<"Enter fisrst number :"<<endl;
	cin>>a;
	cout<<"Enter second number :"<<endl;
	cin>>b;
	int remainder1=calremainder(a);
	cout<<"Remainder of number first is "<<remainder1<<endl;
	int remainder2=calremainder(b);
	cout<<"Remainder of number second is "<<remainder2<<endl;
	int quot=calquotient(a);
    cout<<"Quotient of number first is "<<quot<<endl;
    int quot1=calquotient(b);
	cout<<"Quotient of number second is "<<quot1<<endl;	
	return 0;
}
int calremainder(int num)
{
	int re;
	{
		re=num%2;
	}
	return re;
}
int calquotient(int n)
{
	int q;
	q=n/2;
	return q;
}
