#include<iostream>
using namespace std;
int main()
{
	void change (int*n);
	int n;
	n = 10;
	change(n);
	cout<<"The value of n in main function: "<<n<<endl;
	return 0;
}
void change(int *num)
{
	*num = *num + 10;
	cout<<"The value in change function: "<<*num<<endl;
}
