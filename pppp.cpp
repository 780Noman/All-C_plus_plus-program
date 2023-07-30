#include<iostream>
using namespace std;
int main()
{
	string n1="Noman";
	string n2="Amjad";
	string n3=n1+"  "+n2;
	cout<<"the sum of n1 and n2:"<<n3<<endl;
	cout<<"reverse string is:"<<endl;
   for(int i=n3.size()-1;i>=0;i--)
   {
   	cout<<n3[i]<<endl;
   	
   }
}
