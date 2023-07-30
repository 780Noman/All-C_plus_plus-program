#include<iostream>
using namespace std;
struct student
{
	int rolno;
	string name;
	int marks;
	void display()
	{
		cout<<"Roll number : "<<rolno<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Marks : "<<marks<<endl;
	}
};
int main()
{
	void sort( student[]);
	student s[5];
	for(int i=0;i<5;i++)
	{
	cout<<"Enter the data of students:"<<i+1<<endl;
	cout<<"Enter roll number:";
	cin>>s[i].rolno;
	cout<<"Enter name:";
	cin>>s[i].name;
	cout<<"Enter a marks:";
	cin>>s[i].marks;
	cin.ignore();
	}
	sort(s);
	cout<<"The sorted Array is ....:\n";
	for(int i=0;i<5;i++)
	{
		cout<<"Student "<<i+1<<"  data :"<<endl;
		s[i].display();
	}
}
void sort( student st[])
{
	student temp;
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
	      if(st[i].marks<st[j].marks)
	      {
	      	temp=st[i];
	      	st[i]=st[j];
	      	st[j]=temp;
	      }
		}
	}
}
