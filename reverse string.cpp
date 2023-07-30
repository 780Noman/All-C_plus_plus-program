#include<iostream>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	string str_rev;
	for(int i=str.size()-1;i>=0;i--)
	{
		str_rev=str_rev+str[i];
	}
	cout<<str_rev;
}
