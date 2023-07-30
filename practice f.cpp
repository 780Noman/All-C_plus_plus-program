#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j,count,val;
	cout<<"enter a values of array:\n";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(j=0;j<10;j++)
	{
		val=a[j];
		count=0;
		for(int k=0;k<10;k++)
	{
		if(val==a[k])
		count++;
	}
	cout<<val<<" occurs "<<count<<" times "<<endl;
    }
}
