#include<iostream>
using namespace std;
int main()
{
	int m[3][3],sum=0;;
	cout<<"\nEnter a 2d Array element:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cin>>m[i][j];
	}
	cout<<"\nArray element are:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cout<<m[i][j]<<"\t";
		cout<<endl;
	}
	int sum1=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		if(i==j)
		sum1=sum1+m[i][j];
	}
	cout<<"the sum of left diagnol is:"<<sum1<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		if(i+j==2)
		sum=sum+m[i][j];
	}
	cout<<"The sum of right diagnol:"<<sum;
}
