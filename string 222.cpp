#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main()
{
char s[34],s1[34]=" ";
int m,h=0;
for(int i=0;i<5;i++)
{
cout<<"enter a student name "<<i+1<<":"<<endl;
	cin>>s;
	cout<<"enter a student marks "<<i+1<<":"<<endl;
	cin>>m;

  if(m>h)
 {
 h=m;
 strcpy(s1,s);	
}
}
cout<<s1<<"gives maximum marks"<<h;
	return 0;
}
