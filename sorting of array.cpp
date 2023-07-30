#include<iostream>
using namespace std;
int main()
{
	int tem=0,a[5];
	cout<<"enter a element of array;\n";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
		for(int i=0;i<=4;i++)
		{
		 for(int j=i+1;j<=4;j++)
		 {
		 	if(a[i]>a[j])
		 	{
		 	tem=a[i];
		 	a[i]=a[j];
		 	a[j]=tem;
}		 
}
	   }
		cout<<"the sorted array is :\n";
			for(int i=0;i<5;i++)
			{
				cout<<a[i]<<endl;
			}
}
