#include<iostream>
#include<conio.h>
using namespace std;
class accept
	{
		public : int age;
				 long salary;
				 char name[20];

			void getdata()
				{
					cout<<"Enter Person's Name : ";
					cin>>name;
					cout<<"Enter Person's Age : ";
					cin>>age;
					cout<<"Enter Person's Salary : ";
					cin>>salary;
				}
	};

class print : public accept
	{
		public :
			void show()
				{
					cout<<"\n\nPerson's Name is : "<<name;
					cout<<"\nPerson's Age is : "<<age;
					cout<<"\nPerson's Salary is : "<<salary;
				}
	};


int main()
	{
		print p;
		p.getdata();
		p.show();
		getch();
		return 0;
	}
