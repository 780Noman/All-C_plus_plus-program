#include<iostream>
using namespace std;
int main()
{
	int day,month;
	int days_per_month[]={31,28,31,30,31,30,31,31,30,31,30,31};
	cout<<"enter a day(1 to 31):"<<endl;
	cin>>day;
	cout<<"enter a month(1 to 12):"<<endl;
	cin>>month;
	int total_days=day;
	for(int i=0;i<month-1;i++)
	total_days+=days_per_month[i];
	cout<<"Total days from start of year is:"<<total_days;
}
