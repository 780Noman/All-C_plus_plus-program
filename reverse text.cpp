#include<iostream>
using namespace std;
int main()
{
	char text[10];
	cout<<"enter a text line:";
	for(int i=0;i<10;i++)
	{
	cin>>text[i];
    cout<<text[i];
   }
   cout<<endl;
    for(int j=9;j>=0;j--)
    {
     cout<<text[j];
    }
	
}
