#include<iostream>
#include<iomanip>
using namespace std;
struct student
{
	string name;
	int roln;
	char grade;
	float cgpa;
	string dob;
};
struct DOB
{
	int date, month,year;
};
int main()

{
	student s[3];
	for(int i=0;i<2;i++)
	{
		cout<<"name =\n";
		cin>>s[i].name;
		cout<<"ROLL NUMBER =\n";
		cin>>s[i].roln;
		cout<<"GRADE =\n";
		cin>>s[i].grade;
		cout<<" CGPA =\n";
		cin>>s[i].cgpa;
		DOB dmy;
		cout<<"DOB =DD/MM/YY \n";
		cin>>dmy.date>>dmy.month>>dmy.year;
	}
		for(int i=0;i<2;i++)
	{
		cout<<"name =\n";
		cout<<s[i].name<<endl;
		cout<<"ROLL NUMBER =\n";
		cout<<s[i].roln<<endl;
		cout<<"GRADE =\n";
		cout<<s[i].grade<<endl;
		cout<<"CGPA =\n";
		cout<<s[i].cgpa<<endl;
		DOB dmy;
		cout<<"DOB =DD/MM/YY\n"<<endl;
		cout<<dmy.date<<"-"<<dmy.month<<"-"<<dmy.year;
	}
}
