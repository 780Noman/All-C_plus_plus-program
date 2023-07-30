#include<iostream>
using namespace std;
int main()
{
	int count=0,n;
	cout<<"enter a number:"<<endl;
	cin>>n;
	while(1)
	{
	if(n<10)
	{
	
		count++;
		break;
	}
	else 
	 {
         n=n/10;
		 count++;	
    	}
	}
		cout<<"the digits are:"<<count;
}
