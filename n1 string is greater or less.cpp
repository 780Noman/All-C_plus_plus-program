#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char n1[100],n2[100];
	cout<<"enter a n1 array:"<<endl;
	cin.getline(n1,100);
	cout<<"enter a n2 array:"<<endl;
	cin.getline(n2,100);
	int n=strcmpi(n1,n2);
	if(n<0)
	cout<<n2<<"\tis greater.";
	else if(n==0)
	cout<<n1<<" "<<"and"<<""<<n2<<" "<<"are equal.";
	else
	cout<<n1<<"\tis greater.";
}
