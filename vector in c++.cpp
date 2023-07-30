// vector concepts in c++
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	//Now display all vector element
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}//1 2 3
	cout<<endl;
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<"  ";
	}
	cout<<endl;
/*	for(auto element:v)
	{
		cout<<element<<endl;
	}*/
	//delete value from vector
	v.pop_back();
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<endl;
	}
	vector
	return 0;
}
