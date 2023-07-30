#include<iostream>
using namespace std;
int main()
{
	int m1[3][3],sum_r,sum_c;
	cout<<"\nEnter a m1 element :\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cin>>m1[i][j];
	}
		cout<<"\nThe given m1  matrix is :\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		cout<<m1[i][j]<<"\t";
	    }
		cout<<endl;
	}
	for(int i=0;i<3;i++)
	{
			sum_r=0;
		for(int j=0;j<3;j++)
		{
			sum_r=sum_r+m1[i][j];
		}
		cout<<"SUM OF ROW "<<i+1<<"="<<sum_r<<endl;
	}
	for(int i=0;i<3;i++)
	{
		sum_c=0;
		for(int j=0;j<3;j++)
		{
		sum_c+=m1[j][i];
		}
		cout<<"SUM OF COLUMN "<<i+1<<"="<<sum_c;
		cout<<endl;
	}
	return 0;
}

