#include<iostream>
using namespace std;
int main()
{
  string str;
  cout<<"enter a str:"<<endl;
  getline(cin,str);
  string str_rev;
  cout<<"reverse string is:"<<endl;
  for(int i=str.size()-1;i>=0;i--)
  {
  	cout<<str[i];
  }
 
  //check plidron string
  if(str==str_rev)
  {
  	cout<<"equal this is plidron string.";
  }
  else
  {
  	cout<<"not equal this is not plidron string.";
  }
  
  
}
