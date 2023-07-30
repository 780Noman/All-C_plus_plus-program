#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int arry[15];
  cout<<"enter 15 number :"<<endl;
  for(int i=0;i<15;i++)
  {
  	cin>>arry[i];
  }
int s=arry[0];	  
for(int i=0;i<15;i++)
{
	if(s>arry[i])
	s=arry[i];
}
cout<<"smallest number is :"<<s<<endl;	
int g=arry[0];
for(int i=0;i<15;i++)
{ 
 if(g<arry[i])
 g=arry[i];
}
cout<<"greatest number is :"<<g<<endl;
float average=(s+g)/2;
cout<<"average is ="<<average<<endl;
}













	
	
	
	
	
	
	
	
	
	
	
	
	

