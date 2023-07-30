#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	ifstream dataout("info.txt",ios::app);
	int num;
	string name;
	 dataout.read((char*)(&num),sizeof(num));
	dataout>>num;
	dataout>>name;
	cout<<"enter a roll number:\n";
//	cin>>num;
	cout<<num<<endl;
	cout<<"enter a name of students:\n";
//	cin>>name;
//
	cout<<name<<endl;
  
}
