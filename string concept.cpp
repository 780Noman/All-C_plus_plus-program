#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[20],s1[20];
	cout<<"enter a string 1:\n";
	cin.getline(s,20);
	cout<<"enter a string 2:\n";
	cin.getline(s1,20);
/*	int n=strcmpi(s,s1);
	if(n>0)
	cout<<"the string "<<s<<" is greater.";
	else if(n==0)
	cout<<"both are equal.";
	else
	cout<<s1<<" is greater";
	cout<<"the adding\n";*/
	strcat(s,s1);
	cout<<s;
	return 0;

}
