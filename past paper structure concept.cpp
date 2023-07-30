#include<iostream>
#include<iomanip>
using namespace std;
struct department
{
	int dID;
	string Dname;
	long long contactno;
}d[2];
struct student
{
	int rolno;
	string name;
	string fname;
	int depID;
}s[2];
int main()
{
	int n,i;
	cout<<"enter a number of departments =\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cout<<"enter a department ID :\n";
	cin>>d[i].dID;
	cout<<"enter a department name :\n";
	cin>>d[i].Dname;
	cout<<"enter a department contact number :\n";
	cin>>d[i].contactno;
 }
 cout<<"                     DEPARTMENT \n";
 cout<<"\n_____________________________________________________\n";
 cout<<"Department ID"<<setw(20)<<"Department Name"<<setw(20)<<"contact No"<<"\n";
	for(int i=0;i<n;i++)
	{
	cout<<d[i].dID<<setw(20)<<d[i].Dname<<setw(25)<<d[i].contactno; 
	cout<<endl;
	}
	cout<<endl;
	//student table
	int n1;
	cout<<"enter a number of student :\n";
	cin>>n1;
	for(int i=0;i<n;i++)
	{
	cout<<"enter a Roll number :\n";
	cin>>s[i].rolno;
	cout<<"enter a student name :\n";
	cin>>s[i].name;
	cout<<"enter a father name :\n";
	cin>>s[i].fname;
	cout<<"enter a department ID :\n";
	cin>>s[i].depID;
}
 cout<<"                     STUDENT ";
 cout<<"\n________________________________________________________________________________________\n";
 cout<<"ROLL NO"<<setw(20)<<"Name STUDENT"<<setw(20)<<"FATHER NAME"<<setw(20)<<"DEPARTMENT ID"<<"\n";
 	for(int i=0;i<n1;i++)
	{
	cout<<s[i].rolno<<setw(20)<<s[i].name<<setw(25)<<s[i].fname<<setw(20)<<s[i].depID; 
	cout<<endl;
	}
}
