#include<iostream>
using namespace std;
int main()
{
	int sum,a[3][3],b[3][3],c[3][3];
		cout<<"enter a matrix a:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"the given matrix is:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
		cout<<"enter a matrix b:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"the given matrix is:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"the multiplication of a matrix a*b:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum=0;
			for(int k=0;k<3;k++)
			{
				sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;
			}
			cout<<endl;
		}
	}
    cout<<"enter a matrix a:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
    }
    cout<<"the right diagnol sum in matrix is:\n";
    
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i+j==2);
			{
				sum+=a[i][j];
			}
		}
		cout<<endl;
	}
	
	cout<<"the sum of right diagnol is :\n"<<sum;
    return 0;
}
