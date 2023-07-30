#include<iostream>
using namespace std;
int main()
{
	void sum(int* ,int* );
    int a,b;
    cout<<"enter a first number: "<<endl;
    cin>>a;
    cout<<"enter a second number : "<<endl;
    cin>>b;
    sum(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;
}
void sum(int* x,int* y)
{
	*x=*x+100;
	*y=*y+110;
}
