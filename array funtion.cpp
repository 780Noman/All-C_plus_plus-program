#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int sum(int [],int);
	int l(int [],int);
	int size=sizeof(a)/sizeof(int);
	cout<<"Enter array:\n";
	for(int i=0;i<size;i++)
	{
	cin>>a[i];
    }
	int s=sum(a,size);
	cout<<"Sum of Array = "<<s;
}
    int sum(int x[],int size)
    {
    	int sm=0;
    	for(int i=0;i<size;i++)
		{
		
    	  sm=sm+x[i];
        }
    	  return sm;

	}
