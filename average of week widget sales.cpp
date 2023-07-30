#include<iostream>
using namespace std;
int main()
{
	int sales[6],j;

	for(int i=0;i<6;i++)
	{
		cin>>sales[i];
	}
	int total=0;
	for(int j=0;j<6;j++)
	{
		total=total+sales[j];
	}
	cout<<"tolal="<<total<<endl;
	float ave=total/sales[6];
	cout<<"average is="<<ave<<endl;
}
