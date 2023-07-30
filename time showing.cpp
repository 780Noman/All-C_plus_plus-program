#include<iostream>
using namespace std;
int main()
{
	int sec,s,m,h;
	cout<<"enter time in second:\n";
	cin>>sec;
	h=sec/3600;
	sec=sec%3600;
	m=sec/60;
	s=sec%60;
	cout<<"\n HH-MM-SS\n";
	cout<<h<<"-"<<m<<"-"<<s;
	return 0;
}
