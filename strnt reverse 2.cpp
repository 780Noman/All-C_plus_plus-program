#include<iostream>
using namespace std;
int main()
{
	string str;
	cout<<"enter a string:";
	getline(cin,str);
		cout<<"reverse string is:";
	for(int i=str.size()-1;i>=0;i--)
	cout<<str[i];
}
