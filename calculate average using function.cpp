#include<iostream>
using namespace std;
int main()
{
	int marks[4];
	float calaverage(int[],int);
	int size=sizeof(marks)/sizeof(int);
	cout<<"Enter a 4 subject marks :\n ";
	for(int i=0;i<size;i++)
	{
		cin>>marks[i];
	}
	float ave=calaverage(marks,size);
	cout<<"the average is="<<float(ave);
}
float calaverage(int marks[],int s)
{
	int sum=0;
	for(int i=0;i<s;i++)
	{
	sum=sum+marks[i];
    }
    float average=float(sum/4);
    return average;
}
