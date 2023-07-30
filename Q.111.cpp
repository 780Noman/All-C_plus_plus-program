#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,l;
	char s1[30],tem;
	cout<<"enter a string:";
	cin.getline(s1,30);
    l=strlen(s1);
    for(int i=0;i<l/2;i++)
    {
    	tem=s1[i];
    	s1[i]=s1[l-1-i];
    	s1[l-1-i]=tem;
	}
	cout<<"Reverse string is:"<<s1;
	return 0;
}
