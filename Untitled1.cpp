#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"enter a number:";
	cin>>n;
	while(1)
	{
		if(n<10)
		{
		count++;
		break;
	   }
	  else
		{
			n=n/10;
			count++;
		}
	}
	cout<<"the count digits is="<<count;
}

