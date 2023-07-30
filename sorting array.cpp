#include<iostream>
using namespace std;
int main()
{
	int array[5],tem;
	cout<<"Enter 5 array element\n";
	for(int i=0;i<5;i++)
	{
		cin>>array[i];
	}
	//implementation selection sort algorithm.
	for(int i=0;i<=4;i++)
	  for(int j=i+1;j<=4;j++)
	    if(array[i]>array[j])
	   {
	 	tem=array[i];
	 	array[i]=array[j];
	 	array[j]=tem;																				
	   }
	 for(int i=0;i<5;i++)
	 cout<<array[i]<<endl;
}
