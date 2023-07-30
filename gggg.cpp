#include<iostream>
using namespace std;
int main()
{
	string strcmpi;
	char n1[15],n2[15];
	cout<<"enter a n1:"<<endl;
	cin.getline(n1,15);
	cout<<"enter a n2:"<<endl;
	cin.getline(n2,15);
	int n=strcmpi(n1,n2);
	if(n<0)
	{
		cout<<n2<<"is greater."<<endl;
	}
	else if(n==0)
	{
			cout<<n1<<"\tand\t"<<n2<<"are equal.";
	}
	else
	{
			cout<<n1<<"is greater."<<endl;
	}
	return 0;
}
