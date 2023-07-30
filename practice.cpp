#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number.";
	cin>>n;
	cin.ignore();
	while(n--)
	{
		string str;
	    getline(cin,str);
		cout<<str;
	}
}
