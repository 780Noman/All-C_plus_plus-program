#include<iostream>
using namespace std;
int main()
{
	float calculateaverage(int []);
	int marks[4];
	for(int i=0;i<4;i++)
	{
	    cout<<"Enter a subject "<<i+1<<" marks:";
		cin>>marks[i];
	}
	float average=calculateaverage(marks);
	cout<<"Average is:"<<average;
	return 0;
}
float calculateaverage(int m[])
{
	int sum=0;
	for(int i=0;i<4;i++)
	{
		sum=sum+m[i];
	}
	float ave=(float)sum/4;
	return ave;
}
