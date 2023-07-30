#include<iostream>
using namespace std;
int main()
{
	int n,s=0;
	while(1)
	{
		cout<<"enter a number:";
		cin>>n;
		if(n<0)
		break;
		else
		s=s+n;
	}
	cout<<"sum of given number:"<<s;
}
