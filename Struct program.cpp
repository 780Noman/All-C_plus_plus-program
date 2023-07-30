#include<iostream>
using namespace std;
struct person
{
	string name;
	int age;
	string  gender;
	void display()
	{
		cout<<"Name = "<<name<<endl;
		cout<<"Age = "<<age<<endl;
		cout<<"Gender = "<<gender<<endl;
	}
};
int main()
{
	person p1,p;
	cout<<"enter name:"<<endl;
	cin>>p1.name;
	cout<<"enter age:"<<endl;
	cin>>p1.age;
	cout<<"enter gender:"<<endl;
	cin>>p1.gender;
	person p2;
	cout<<"enter name:"<<endl;
	cin>>p2.name;
	cout<<"enter age:"<<endl;
	cin>>p2.age;
	cout<<"enter gender:"<<endl;
	cin>>p2.gender;
	p1.display();
	p2.display();
	if(p1.age>p2.age)
	p=p1;
	else
	p=p2;
	p.display();
}
