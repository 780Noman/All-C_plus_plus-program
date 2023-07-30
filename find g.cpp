#include<iostream>
using namespace std;
int main()
{ 
 int arr[10];
 int l=0;
 cout<<"enter 10 values :"<<endl;
 for(int i=0;i<10;i++)
 {
 	cin>>arr[i];
 }
 int s = arr[0];
    for(int i=0; i<10; i++)
    {
        if(s>arr[i])
            s = arr[i];
    }
    cout<<" Smallest Number = "<<s;
    int g = arr[0];
    for(int i=0; i<10; i++)
    {
        if(g<arr[i])
            g = arr[i];
    }
    cout<<"\ngreatest Number = "<<g;
    cout<<endl;
    float avg =( s + g)/2;
    cout<<"Avg is = "<<avg<<endl;
 return 0;
}
