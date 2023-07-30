#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char ch[50]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ch1[50]="abcdefghijklmnopqrstuvwxyz";
	int i,len=0;
	for(i=0;ch[i]!='\0';i++)
	{
		len++;
	}	
	cout<<"ASCII Code of Uppercase letter :\n";
	for(i=0;i<len;i++)
	{
		cout<<"ASCII Code of "<<ch[i]<<" : "<<int (ch[i])<<endl;
	}
	cout<<"ASCII Code of lowercase letter :\n";
	for(i=0;i<len;i++)
	{
		cout<<"ASCII Code of  "<<ch1[i]<<" : "<<int (ch1[i])<<endl;
	}
    return 0;
}
