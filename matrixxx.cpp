#include<iostream>
using namespace std;
int main()
{
	int sum,m[3][3],b[3][3],c[3][3];
	cout<<"enter a matrix m:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>m[i][j];
		}
	}
	cout<<"the given matrix is:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<m[i][j]<<"\t";
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
	cout<<"the sum of rows is:\n";
	for(int i=0;i<3;i++)
	{
		sum=0;
		for(int j=0;j<3;j++)
		{
		sum=sum+m[i][j];
		}
		cout<<"the sum of row "<<i+1<<":"<<sum;
		cout<<endl;
    }
    	cout<<"the sum of column is:\n";
	for(int i=0;i<3;i++)
	{
		sum=0;
		for(int j=0;j<3;j++)
		{
		sum=sum+m[j][i];
		}
		cout<<"the sum of column "<<i+1<<":"<<sum;
		cout<<endl;
    }
   	cout<<"the sum of two matrix is::::\n";
    sum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		c[i][j]=m[i][j]+b[i][j];
		}
		cout<<endl;
    }
    	cout<<"the after sum given matrix is:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
	   cout<<c[i][j]<<"\t";
        }
		cout<<endl;
    }
}
