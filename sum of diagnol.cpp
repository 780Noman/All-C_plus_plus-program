#include<iostream>
using namespace std;
int main()
{
	int sum=0,m[3][3],a[3][3],s[3][3];
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
 for(int i=0;i<3;i++)
 {
 	for(int j=0;j<3;j++)
 	{
 		if(i+j==2)
 		{
 			sum+=m[i][j];
		 }
	 }
	 cout<<endl;
 }
 cout<<"sum of left diagnol "<<sum<<endl;
 cout<<"the mode of matrix is:\n";
 for(int i=0;i<3;i++)
 {
 	for(int j=0;j<3;j++)
 	{
 		cout<<m[j][i]<<"\t";
	 }
	 cout<<endl;
 }
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
		cout<<"the subtraction of matrix is:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			s[i][j]=m[i][j]-a[i][j];
		}
		cout<<endl;
	}
		cout<<"the given matrix after subtraction is:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<s[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	
 return 0;
}

 
