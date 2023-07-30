#include<iostream>
using namespace std;
struct part
{
	int modelnumber;
	int partnumber;
	float cost;
	void display()
	{
		cout<<"Model number= "<<modelnumber<<endl;
		cout<<"Part number= "<<partnumber<<endl;
		cout<<" Cost = "<<cost<<endl;
	}
};
int main()
{
	part part1={2012,373,217.387};
	/*
	cout<<"Enter model Number:\n";
	cin>>part1.modelnumber;
	cout<<"Enter part Number:\n";
	cin>>part1.partnumber;
	cout<<"Enter a cost $:\n";
	cin>>part1.cost;
	cout<<"\nModel number:\n"<<part1.modelnumber;
	cout<<"\nPart number:\n"<<part1.partnumber;
	cout<<"\nCost :\n"<<part1.cost;*/
	part1.display();
	part part2;
	part2=part1;
	part2.display();
/*	cout<<"\nModel number:\n"<<part2.modelnumber;
	cout<<"\nPart number:\n"<<part2.partnumber;
	cout<<"\nCost :\n"<<part2.cost;*/
	return 0;
}
