#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	int rollnumber;
	string name;
	ifstream dataout("info.txt",ios::app);
	dataout>>rollnumber;
	dataout>>name;
	cout<<rollnumber;
	cout<<name;
	dataout.close();	
}
