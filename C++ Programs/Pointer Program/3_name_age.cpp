#include<iostream>
#include<conio.h>
using namespace std;
class complex
	{
		private : char name[20];
				  int age;
		public :
			void getdata()
			{
					cout<<"Enter Your Name : ";
					cin>>name;
					cout<<"Enter Your Age : ";
					cin>>age;
			}
			void print()
			{
					cout<<"\n\nYour Name is : "<<name;
					cout<<"\nYour Age is : "<<age;
			}
	};

int main()
	{
		complex *s1=new complex;
		s1->getdata();
		s1->print();
		getch();
		return 0;
	}
