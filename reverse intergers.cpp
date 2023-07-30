#include<iostream>
using namespace std;
int main()
{
	int n,a,b;
	cout<<"enter a number:"<<endl;
	cin>>n;
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	cout<<"the number is :"<<endl<<n<<b<<a;
}
