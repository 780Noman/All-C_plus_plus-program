#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,j;
	cout<<"ENTER 10 NUMBER:"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];	
	}
	for(int j=0;j<10;j++)
	if(arr[i] == arr[j])
	break;
  else	if(i==j)
	cout<<"the distinct number :"<<arr[i]<<"  ";
}
