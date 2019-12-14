#include<iostream>
#include<conio.h>
using namespace std;
class accept
	{
		public : int rn;
				 int m1,m2,m3;

					void getdata()
						{
							cout<<"Enter Student Roll Number : ";
							cin>>rn;
							cout<<"Enter Student Marks for First Subjects : ";
							cin>>m1;
							cout<<"Enter Student Marks for Second Subjects : ";
							cin>>m2;
							cout<<"Enter Student Marks for Third Subjects : ";
							cin>>m3;
						}
	};

class print : public accept
	{
		public :
			void show()
				{
					cout<<"\n\nStudent Roll Number is : "<<rn;
					cout<<"\nStudent Marks for First Subjects is : "<<m1;
					cout<<"\nStudent Marks for Second Subjects is : "<<m2;
					cout<<"\nStudent Marks for Third Subjects is : "<<m3;
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
