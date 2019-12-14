#include<iostream>
#include<conio.h>
using namespace std;
class student
	{
		protected : int rn,m1,m2,m3,sum,per;
		public :
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
				void percentage()
					{
						cout<<"\n\nPercentage of Student is : "<<(m1+m2+m3)/3;
					}

	};

class test : public student
	{
		public :

			void putdata()
			{
				getdata();
				cout<<"\n\nStudent Roll Number is : "<<rn;
				cout<<"\nStudent Marks for First Subject is : "<<m1;
				cout<<"\nStudent Marks for Second Subject is : "<<m2;
				cout<<"\nStudent Marks for Third Subject is : "<<m3;
			}

			void show()
				{
					cout<<"\n\nStudent Roll Number is : "<<rn;
					cout<<"\nTotal Marks Of Three Subjects are : "<<m1+m2+m3;
				}



	};

class score : public student
	{
		public :
			void percen()
				{
					percentage();
				}
	};

class result : public test , public score
	{
		public :
			void display()
				{
					putdata();
					show();
				}
	};


int main()
	{
		result r;
		r.display();
		getch();
		return 0;
	}
