#include<iostream>
using namespace std;
int main()
{
	int n,count;
	cout<<"Enter a Number:";
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
		cout<<count<<endl;
}
