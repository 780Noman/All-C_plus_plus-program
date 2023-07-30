#include<iostream>
using namespace std;
int main()
{
	int n;
	while(1)
	{
		cin>>n;
		if(n==0)
		break;
		else
		{
			int f=1;
			for(int i=1;i<=n;i++)
			f=f*i;
			cout<<"factorial is :"<<f;
		}
	}
}
