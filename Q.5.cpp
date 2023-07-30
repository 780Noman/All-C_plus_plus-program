#include<iostream>
using namespace std;
int main()
{
	int m1[3][4],m2[4][3],m3[3][3];
	cout<<"\nEnter a m1 element :\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		cin>>m1[i][j];
	}
	cout<<"\nEnter a m2 element :\n";
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		cin>>m2[i][j];
	}
	cout<<"\nThe given m1  matrix is :\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		cout<<m1[i][j]<<"\t";
		cout<<endl;
	}
		cout<<"\nThe given m2  matrix is :\n";
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		cout<<m2[i][j]<<"\t";
		cout<<endl;
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
	 {
		m3[i][j]=0;
		for(int k=0;k<4;k++)
	    {
		m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
	    }
	 }
	}
	cout<<"The multiplication of 2 matrix is:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cout<<m3[i][j]<<"\t";
		cout<<endl;

 	}
	return 0;	
}
