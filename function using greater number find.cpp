#include<iostream>
using namespace std;
int main()
{
	int b[10];
    int larger(int [],int);
	int S=sizeof(b)/sizeof(int);
	cout<<"Enter array:\n";
	for(int i=0;i<S;i++)
	{
	cin>>b[i];
    }
    int lar=larger(b,S);
    cout<<"The greater number is:"<<lar;
}
    int larger(int y[],int S)
    {
	int lar=0;
	for (int i=0;i<S;i++)
	  {
		if(y[i]>lar)
		lar=y[i];
	  }
	 return lar;
}
