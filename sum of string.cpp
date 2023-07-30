#include<iostream>
using namespace std;
int main()
{
	string str1,str2;
	cout<<"enter a n1 string"<<endl;
	getline(cin,str1);
	cout<<"enter a n2 string"<<endl;
	getline(cin,str2);
	string str3=str1+" "+str2;
	cout<<str3;
}
