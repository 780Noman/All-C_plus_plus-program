#include<iostream>
using namespace std;
struct books
{
	string title;
	int price;
};
int main()
{
	void bubblesort(struct books[]);
	books book[10],bok;
	for(int i=0;i<10;i++)
	{
	cout<<"enter a book "<<i+1<<" title."<<endl;
	cin>>book[i].title;
	cout<<"enter a price of book "<<i+1<<":"<<endl;
	cin>>book[i].price;
}
cout<<"the book having maximum price is:"<<endl;
for(int i=0;i<10;i++)
{
	if(book[i].price<book[i+1].price)
	bok=book[i+1];	
}
 cout<<"Book name: "<<bok.title;
return 0;
}
void bubblesort(struct books b[])
{
    books tem;
	int i,j;
	for(int i=0;i<9;i++)
	 {
	 	for(int j=i+1;j<10;j++)
	 	{
	 		if(b[i].price<b[j].price)
	 		{
	 		 tem=b[i];
	 		 b[i]=b[j];
	 		 b[j]=tem;
			}
		 }
	 }
}
