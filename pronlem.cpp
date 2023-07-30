#include<iostream>
using namespace std;
int main()
{
	string strcmpi;
	char n1[100],n2[100];
	cout<<"Enter a string :"<<endl;
	cin.getline(n1,100);
	cout<<"Enter a 2nd string:"<<endl;
	cin.getline(n2,100);
	int n=strcmpi(n1,n2);
	if(n<0)
	cout<<n2<<"is greater."<<endl;
	else if(n>0)
	cout<<n1<<"is greater."<<endl;
	else
	cout<<n1<<"\t and \t"<<n2<<"\t are equal.";
}
