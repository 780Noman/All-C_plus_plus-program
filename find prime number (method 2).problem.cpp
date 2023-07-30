#include<iostream>
using namespace std;
int main()
{
  int n,p=0;
  cout<<"enter a number:";
  cin>>n;
  for(int i=2;i<n;i++)
  {
  if(n%i==0)
    {
  	p++;
  	break;
    }	
  }
  if(p==0)
  cout<<"prime number.";
  else
  cout<<"not a prime number.";
 
	
}
