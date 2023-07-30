#include<iostream>
using namespace std;
int main()
{
	int p=0,n=0,o=0,e=0,z=0;
	int a[10];
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
		if(a[i]>0)
		p++;
		else if(a[i]<0)
		n--;
		else
		z++;
		if(a[i]%2==0)
		e++;
		else
		o++;
	}
	cout<<"Positive"<<p<<"negative"<<n<<"even"<<e<<"odd"<<o<<"zero"<<z;
	return 0;
}

