#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number:";
	cin>>n;
	cout<<"table of given number is as below:"<<endl;
	for(int i=0;i<=10;i++)
	cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
}
