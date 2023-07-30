#include<iostream>
using namespace std;
int main()
{
	int n,s=0;
	cout<<"enter a number:"<<endl;
	cin>>n;
	while(n!=0)
	{
		s=s+n;
	   cin>>n;
	}
	cout<<"sum of given number is:"<<s;
}
