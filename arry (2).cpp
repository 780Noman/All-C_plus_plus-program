#include<iostream>
using namespace std;
int main()
{
 int arry[3][4];
cout<<"enter number of elements";
for(int i=0;i<3;i++)
 {
  for(int j=0;j<4;j++)
  {
 cin>>arry[i][j];
  }
}
 for(int i=0;i<3;i++)
 {
 
   for(int j=0;j<4;j++)
 {
 cout<<arry[i][j]<<"\t";
 }
 cout<<"\n"; 
}
return 0;
 
}

