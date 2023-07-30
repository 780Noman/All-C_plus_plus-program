#include<iostream>
using namespace std;
int main()
{
	void star(char,int);
	star('*',5);
	cout<<"\nWelcome to\n";
	star('$',6);
	cout<<"\nFunction \n";
	star('#',7);
}
 void star(char s,int n)
 {
 	for(int i=1;i<=n;i++)
 	cout<<s;
 }
