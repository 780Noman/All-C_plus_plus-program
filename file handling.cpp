#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	ofstream dataout("info.txt",ios::app);
	int num;
	string name;
	cout<<"enter a roll number:\n";
	cin>>num;
	cout<<"enter a name of students:\n";
	cin>>name;
	cout<<num<<endl;
	cout<<name<<endl;
	dataout<<num<<endl;
	dataout<<name<<endl;
	dataout.close();
}
