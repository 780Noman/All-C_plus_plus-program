#include<iostream>
using namespace std;
int main()
{
	int n,s=0;
	do
	{
		s=s+n;
		cin>>n;
	}while(n!=0);
	cout<<"sum of given number:"<<s;	
}
