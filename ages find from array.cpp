//gets ages from user and then display it.
#include<iostream>
using namespace std;
int main()
{
	int ages[5];
	for(int i=0;i<5;i++)
	{
	cout<<"enter your ages:"<<endl;
	cin>>ages[i];
    }
    for(int j=0;j<5;j++)
    {
    	cout<<"you enter ages are:"<<ages[j]<<endl;
	}
	int gre=ages[0];
	
		for(int k=0;k<5;k++)
	{
		if(gre<ages[k])
		gre=ages[k];
		}	
		cout<<"the greater age is :"<<gre<<endl;
	int sma=ages[0];
	for(int l=0;l<5;l++)
	{ 
	 if(sma>ages[l])
	 sma=ages[l];
	}
	cout<<"the smallest ages is :"<<sma<<endl;
}
