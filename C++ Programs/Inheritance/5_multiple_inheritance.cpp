#include<iostream>
#include<conio.h>
using namespace std;
class accept
	{
		protected : int rn;
		public :
				void getdata()
					{
						cout<<"Enter Student Roll Number : ";
						cin>>rn;
					}

	};

class calculation
	{
		protected : int sum,m1,m2,m3;
		public :

			void accept_mark()
					{
						cout<<"Enter Student Marks for First Subjects : ";
						cin>>m1;
						cout<<"Enter Student Marks for Second Subjects : ";
						cin>>m2;
						cout<<"Enter Student Marks for Third Subjects : ";
						cin>>m3;
					}
			void cal()
				{
					sum=m1+m2+m3;
				}
	};

class print : public accept,public calculation
	{
		private :
		public :
			void show()
				{
					cout<<"\n\nStudent Roll Number is : "<<rn;
					cout<<"\n\nTotal Marks Of Three Subjects are : "<<sum;
				}
	};


int main()
	{
		print p;
		p.getdata();
		p.accept_mark();
		p.cal();
		p.show();
		getch();
		return 0;
	}
