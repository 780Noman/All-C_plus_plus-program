#include<iostream>
using namespace std;
int main()
{
	int n;
	void eventoodd(int);
	cout<<"Enter a number:\n";
	cin>>n;
	eventoodd(n);
	return 0;
}
void eventoodd(int num)
{
	if(num%2==0)
	{
		cout<<"the given number is even.";
	}
	else
	{
		cout<<"the given number is odd.";
	}
}

