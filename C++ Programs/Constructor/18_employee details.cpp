#include<iostream>
#include<conio.h>
using namespace std;
class data
	{
		public : int age;
				 long salary;
				 char name[20];
			data()
				{
				    cout<<"Enter Manager Name : ";
					cin>>name;
					cout<<"Enter Manager Age : ";
					cin>>age;
					cout<<"Enter Manager Salary : ";
					cin>>salary;
					cout<<"\n\nManager Name is : "<<name;
					cout<<"\nManager Age is : "<<age;
					cout<<"\nManager Salary is : "<<salary;
				}
	};


int main()
	{
		data d;
		getch();
		return 0;
	}
