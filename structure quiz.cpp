#include<iostream>
using namespace std;
struct book
{
	string title;
	long int price;
	void display()
	{
		cout<<"title"<<title<<endl;
		cout<<"price"<<price<<endl;
	}
};
int main()
{
	//void sort(book []);
 book b1[5],b2;
 	b2.price=0;
	for(int i=0;i<5;i++)
	{
		cin>>b1[i].title;
		cin>>b1[i].price;
	if(b1[i].price>b2.price)
	{
		b2=b1[i];
	//	b2.title=b1[i].title;
	}
	
}
	cout<<"the highest price book is:\n"<<b2.title;
/*	sort(b1);
//	cout<<"the sorted array is:\n";
	for(int i=0;i<1;i++)
	b1[0].display();
}
	
	void sort(book b2[])
	{
		book temp;
	for(int i=0;i<4;i++)
	{
	 for(int j=i+1;j<10;j++)
		if(b2[i].price<b2[i].price)
		{
			temp=b2[i];
			b2[i]=b2[j];
			b2[j]=temp;
		}

	}*/
}
