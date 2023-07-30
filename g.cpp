#include<iostream>
using namespace std;
int main()
{
	int array[10],tem;
	cout<<"enter 10 array number:"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>array[i];
	}
	for(int i=0;i<9;i++)
	   for(int j=i+1;j<10;j++)
	   
	   	if(array[i]>array[j])
	   	{
         tem=array[i];
         array[i]=array[j];
         array[j]=tem;
	   }
	   cout<<"the sorting array are:"<<endl;
	 for(int i=0;i<10;i++)
	 cout<<array[i]<<endl;
}
