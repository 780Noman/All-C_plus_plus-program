#include<iostream>
using namespace std;
int main()
{
	int s=0,p=1;
int	arry[10];
for(int i=0;i<10;i++)
{
	cout<<"enter a number:";
	cin>>arry[i];
}
	for(int i=0;i<10;i++)
	{
		s=s+arry[i];
		cout<<endl;
	}
	cout<<"sum="<<s<<endl;
	for(int i=0;i<10;i++)
	{
		p=p*arry[i];
	}
	cout<<"product="<<p<<endl;
}
