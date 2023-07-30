#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter a student marks:"<<endl;
	cin>>marks;
	if(marks<25)
	cout<<"Grade :F"<<endl;
	else if(25>marks && marks<45)
	cout<<"Grade :E"<<endl;
	else if(45>marks && marks<50)
		cout<<"Grade :D"<<endl;
}
