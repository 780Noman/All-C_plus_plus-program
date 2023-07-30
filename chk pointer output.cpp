#include<iostream>
using namespace std;
int main()
{
	int var1=3;
	int var2=24;
	float var3=17.5;
	float *fptr=&var3;
	int *iptr=&var1;
	int *vptr=&var2;
	cout<<fptr<<endl<<*iptr<<endl<<vptr<<endl;
	vptr=&var3;
	cout<<vptr;
}
