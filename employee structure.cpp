#include<iostream>
using namespace std;
struct employee
{
	string name;
	string address;
	int salary;
	long Id;
	long long contact;
	void display()
	{
	cout<<"employe name:\n"<<name<<endl;
	cout<<"employee address:\n"<<address<<endl;
	cout<<"employee salary:\n"<<salary<<endl;
	cout<<"Enter employee ID:\n"<<Id<<endl;
	cout<<"Enter employee Contact:\n"<<contact<<endl; 
	}
	
};
int main()
{
	
	employee emp1[2];
	for(int i=0;i<2;i++)
	{
	cout<<"enter the data of employee"<<i+1<<endl;
	cout<<"Enter  employe name:\n";
	cin>>emp1[i].name;
	cout<<"Enter employee address:\n";
	cin>>emp1[i].address;
	cout<<"Enter employee salary:\n";
	cin>>emp1[i].salary;
	cout<<"Enter employee ID:\n";
	cin>>emp1[i].Id;
	cout<<"Enter employee Contact:\n";
	cin>>emp1[i].contact;
    }
    cout<<"The record of employee is :"<<endl;
    for(int i=0;i<2;i++)
    {
    cout<<"enter the data of employee= "<<i+1<<endl;	
	emp1[i].display(); 
    }

	return 0;
}
