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
  cout<<"Greatest Number is:"<<g<<endl;
 int sum=0;
 for(int i=0;i<10;i++)
 {
 	sum=sum+arry[i];
 }
 cout<<"the sum of given array is:"<<sum<<endl;
float average=float(sum)/10;
 cout<<"Average is = "<<average<<endl;
}
