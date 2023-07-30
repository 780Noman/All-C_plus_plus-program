#include<iostream>
using namespace std;
int main()
{
	int ch,ca,pc ,p;
	cout<<"enter classes held:";
	cin>>ch;
	cout<<"enter classes attended:";
	cin>>ca;
	cout<<"enter percentage of classes attended:";
	cin>>p;
	p=ca*ch/100;
	if(p>75)
	cout<<"sit in exam:";
	else
	cout<<"not sit";
}
