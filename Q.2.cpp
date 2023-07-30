#include<iostream>
#include<string>
using namespace std;
int main()
{
	int length=0;
	string str;
	cout<<"Enter a string :";
	getline(cin,str);
	for(int i=0;str[i]!='\0';i++)
	{
		length++;
	}
	cout<<"Reverse string is =";
	for(int i=length;i>=0;i--)
	{
		cout<<str[i];
	}
	return 0;
}
