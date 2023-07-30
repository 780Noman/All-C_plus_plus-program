#include<iostream>
using namespace std;
int main()
{
	int ar[10],val,count;
	cout<<"enter values in array\n";
	for(int i=0;i<10;i++)
	{
	
		cin>>ar[i];
	}
	for(int u=0;u<10;u++)
	{
		val=ar[u];
		count=0;
		for(int i=0;i<10;i++)
		{
			if(val==ar[i])
			count++;
		}
		cout<<val<<" occurs "<<count<<"  times"<<endl;
	}
	
 } 
