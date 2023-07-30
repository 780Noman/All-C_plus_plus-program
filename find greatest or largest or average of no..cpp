#include<iostream>
using namespace std;
int main()
{ 
 int arry[10];
 cout<<"Enter 10 Number:"<<endl;
 for(int i=0;i<10;i++)
 {
 	cin>>arry[i];
 }
 int s=arry[0];
 for(int i=0;i<10;i++)
 {
 	if(s>arry[i])
 	s=arry[i];
 }
 cout<<"Smallest Number is:"<<s<<endl;
 int g=arry[0];
 for(int i=0;i<10;i++)
 { 
  if(g<arry[i])
  g=arry[i];
 }
 cout<<"Greatest Nmber is:"<<g<<endl;
  int sum=0;
  for(int i=0;i<10;i++)
  {
   sum=sum+arry[i];
  }
  float	average=sum/10;
  	cout<<"average="<<average<<endl;
  int	n_g=arry[0];
  	for(int i=0;i<10;i++)
  	{
  		if(n_g<arry[i])
  		 n_g=arry[i];
	  }
    cout<<"the number of values greater than average:"<<n_g<<endl;
    int n_l=arry[0];
    for (int i=0;i<10;i++)
    {
    	if(n_l>arry[i])
    	n_l=arry[i];
	}
    cout<<"the  number of values less than average:"<<n_l<<endl;
} 
