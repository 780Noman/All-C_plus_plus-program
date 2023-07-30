#include<iostream>
using namespace std;
void fprime(int n)
{
   int p=0;
   for(int i=1;i<=n;i++)
	{
	 if(n%i==0)
		{
		  p++;
		}
	}
		if(p==2)
		{
			cout<<"the number is prime.";
		}
		else
		{
			cout<<"the number is not prime.";
		}
	
}
int main()
{
	void fprime(int);
	int num;
	cout<<"enter a number:\n";
	cin>>num;
	fprime(num);
	return 0;
}

