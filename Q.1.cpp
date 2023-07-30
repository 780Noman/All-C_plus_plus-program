#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[10];
	cout<<"Enter a String :\n";
	cin.getline(s1,10);
	for(int i=9;i>=0;i--)
	{
		cout<<s1[i];
		
	 } 
}
