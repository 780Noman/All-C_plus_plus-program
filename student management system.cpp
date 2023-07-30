#include<iostream>
#include<windows.h>
#include<string>
#include<conio.h>
using namespace std;
//Represented by hasnain and Noman.
struct stu
{
	string id,adress,contact,fees,name;
}s[1000];
int total=0,i,j;
void empdata()
{
	int choice;
	cout<<"How many student data you want to enter"<<endl;
	cin>>choice;
	for(i=total;i<total+choice;i++)
	{
		cout<<"Enter data of student "<<i+1<<endl;
		cout<<"Employee Name: ";
		cin.ignore();
		getline(cin,s[i].name);
		cout<<"student ID: ";
		cin>>s[i].id;
		cout<<"Address: ";
		cin.ignore();
		getline(cin,s[i].adress);
		cout<<"contact: ";
		cin>>s[i].contact;
		cout<<"Fees: ";
		cin>>s[i].fees;
	}
	total=total+choice;
	
}
void show()
{
	if(total!=0)
	{
		for(i=0;i<total;i++)
		{
		cout<<"Data of student"<<i+1<<endl;
		cout<<"Student name: "<<s[i].name<<endl;
		cout<<"Student address: "<<s[i].adress<<endl;
		cout<<"Student ID: "<<s[i].id<<endl;
		cout<<"Student contact: "<<s[i].contact<<endl;
		cout<<"Student salary: "<<s[i].fees<<endl<<endl;
	   }
	}
	else
	cout<<"Your record is empty"<<endl;
}
void search()
{
	if(total!=0)
	{
		string id;
		cout<<"Enter Arid number you want to search"<<endl;
		cin>>id;
		for(i=0;i<total;i++)
		if(id==s[i].id)
		{
		cout<<"Data of student"<<i+1<<endl;
		cout<<"Student name: "<<s[i].name<<endl;
		cout<<"Student address: "<<s[i].adress<<endl;
		cout<<"Student ID: "<<s[i].id<<endl;
		cout<<"Student contact: "<<s[i].contact<<endl;
		cout<<"Student fees: "<<s[i].fees<<endl;
		break;
		}
		if(i==total-1)
		{
			cout<<"No search record found"<<endl;
		}
		
	}
	else
	cout<<"Your record is empty"<<endl;
}
void update()
{
		if(total!=0)
	{
		string id;
		cout<<"Enter ID you want to update"<<endl;
		cin>>id;
		for(i=0;i<total;i++)
		if(id==s[i].id)
		{
		cout<<"PERVIOUS DATA"<<endl;
		cout<<"Data of Student"<<i+1<<endl;
		cout<<"Student name: "<<s[i].name<<endl;
		cout<<"Student address: "<<s[i].adress<<endl;
		cout<<"Student ID: "<<s[i].id<<endl;
		cout<<"Student contact: "<<s[i].contact<<endl;
		cout<<"Student salary: "<<s[i].fees<<endl<<endl;
		cout<<"Enter New Data: "<<endl;
		cout<<"Student Name: ";
		cin>>s[i].name;
		cout<<"Stydent ID: ";
		cin>>s[i].id;
		cout<<"Address: ";
		cin>>s[i].adress;
		cout<<"contact: ";
		cin>>s[i].contact;
		cout<<"fees: ";
		cin>>s[i].fees;
		break;
		}
				if(i==total-1)
		{
			cout<<"No search record found"<<endl;
		}
	}
	else
	cout<<"Your record is empty"<<endl;
}
void del()
{
	if(total!=0)
	{
		char user;
		cout<<"Press 1 to delete whole record"<<endl;
		cout<<"Press 2 to delete spacific record"<<endl;
		user=getch();
		if(user=='1')
		{
		total=0;
		cout<<"Your Whole Record is deleted"<<endl;
	    }
	    else if(user=='2')
	    {
	    string id;
		cout<<"Enter ID you want to delete"<<endl;
		cin>>id;
		for(i=0;i<total;i++)
		if(id==s[i].id)
		{
			for(j=i;j<total;j++ )
			s[j].name[30]=s[j+1].name[30];
			s[j].id=s[j+1].id;
			s[j].contact=s[j+1].contact;
			s[j].adress=s[j+1].adress;
			s[j].fees=s[j+1].fees;
			total--;
			cout<<"Your Required record is deleted"<<endl;
			break;
		}
		}
	}
	else
	cout<<"You Enter wrong ID."<<endl;
}
//REPRESENTED BY ARSLAN AND ABBAS.
int main()                                
{
	cout<<"\n\n\n\t\t\t*******Student Management system******\t\t\t\n";
	cout<<"\n\t\t\t\t*sign up*\t\t\t\n";
	string username,password;
	cout<<"\nusername:";
	getline(cin,username);
	cout<<"\npassword:";
	cin>>password;
	cout<<"\nyour ID is creating please wait";
	for(int i=1;i<5;i++)
	{
		cout<<".";
		Sleep(700);
	}
	cout<<"\nyour ID is created successfully";
	Sleep(1000);
	system("CLS");
	cout<<"\n\n\n\t\t\t***Student Management system***\t\t\t\n";
	cout<<"\n\t\t\t\t\t*login*"<<endl;
	string username1,password1;
	cout<<"username:";
	cin>>username1;
	cout<<"password:";
	cin>>password1;                                            
	if(username1==username && password1==password)
	{
		system("CLS");
		char user;
		while(1)
		{
			cout<<"Press 1 to Enter Data"<<endl;
			cout<<"Press 2 to show Data"<<endl;
			cout<<"Press 3 to search Data"<<endl;
			cout<<"Press 4 to Update Data"<<endl;
			cout<<"Press 5 to delete Data"<<endl;
			cout<<"Press 6 to exit"<<endl;
			user=getch();
			system("CLS");
			switch(user)
			{
			case'1':
				empdata();
				break;
			case'2':
			    show();
				break;
			case'3':
			    search();
				break;
			case'4':
			    update();
				break;
			case'5':
			    del();
				break;
			case '6':
			     exit(0);
				 break;     
			default:
			  cout<<"\aInvalid input"<<endl;
			  break;	 					
		}
	}
	}
	else if(username1!=username)
	{
	cout<<"you enter wrong username.\n";
    }
	else if(password1!=password)
	{
	cout<<"you password is invalid.\n";
	Sleep(2000);
    }
}
