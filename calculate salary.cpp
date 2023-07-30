#include<iostream>
using namespace std;
int main()
{
	int salary, year;
	cout<<"enter a salary of employee:"<<endl;
	cin>>salary;
	cout<<"enter a year of service:"<<endl;
	cin>>year;
	if(year>5)
	{
		salary=salary*5/100;
		cout<<"salary is with bonus:"<<salary;
	}
}
