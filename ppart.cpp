#include<iostream>
using namespace std;
int main()
{
	void arr(int *[]);
	void ar(int *[]);
	int aa[5];
	int a[5];
	cout<<"given array.\n";
	arr(&aa);
	cout<<"reversee of array\n";
	ar(&a); 
}
void arr(int *array[])
{
	cout<"enter a array:\n";
	for(int i=0;i<5;i++)
	{
		array[i];
	}
}
void ar(int *a[])
{
	for(int i=5;i>0;i++)
	{
		a[i];
	}
}
