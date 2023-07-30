#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char n1[15],n2[15];
	cout<<"enter a n1 array:"<<endl;
	cin>>n1;
	cout<<"enter a n2 array:"<<endl;
	cin>>n2;
	int n=strcmpi(n1,n2);
	if(n<0)
	cout<<n2<<" is greater "<<endl;
	else if(n==0)
	cout<<n1<<"  and "<<n2<<"  are equal"<<endl;
	else
	cout<<n1<<" is greater"<<endl;
}
