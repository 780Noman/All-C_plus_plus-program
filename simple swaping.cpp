#include<iostream>
using namespace std;
int main()
{
	void copy(int,int);
	int n,num;
	cout<<"enter a first number:";
	cin>>n;
	cout<<"enter a second number :";
	cin>>num;
	copy(n,num);
		cout<<"num="<<num<<endl;
	cout<<"n="<<n<<endl;
	return 0;
}
void copy(int a,int b)
{
	int temp=0;
	temp=a;
	a=b;
	b=temp;

}
