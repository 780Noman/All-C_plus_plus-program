#include<iostream>
using namespace std;
int main()
{
	int m1[3][3],m2[3][3],m3[3][3],m4[3][3];
	cout<<"\nEnter a m1 element :\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cin>>m1[i][j];
	}
	cout<<"\nEnter a m2 element :\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cin>>m2[i][j];
	}
	cout<<"the given matrix m1 is:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		 cout<<m1[i][j]<<"\t";
		}
		cout<<endl;
	}


		cout<<"\nThe given m2  matrix is :\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		cout<<m2[i][j]<<"\t";
	    }
		cout<<endl;
	}
		
	for(int i=0;i<3;i++)
	{
		
		for(int j=0;j<3;j++)
		{
		 m3[i][j]=m1[i][j]+m2[i][j];
		}
	}
	cout<<"The sum of two matrix is :\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		cout<<m3[i][j]<<"\t";
	    }
		cout<<endl;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			m4[i][j]=m1[i][j]-m2[i][j];
		}
	}
	cout<<"The subtraction of two matrix is :\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<m4[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
