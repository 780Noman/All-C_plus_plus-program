#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter a number:";
  cin>>n;
  int p=0;
  for(int i=0;i<=n;i++)
  {
  
  if(n%i == 0)
  p++;
   else if(p == 2)
   cout<<"the number is prime:";
   else
   cout<<"the number is not prime:";	
}
}
