#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter a number:"<<endl;
  cin>>n;
  int f=1;
  for(int i=1;i<=n;i++)
  f=f*i;
  cout<<"the factorial of given number is:"<<f;
}
