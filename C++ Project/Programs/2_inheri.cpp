#include<iostream>
#include<conio.h>
using namespace std;
class accept
	{
		public : int rn;
				 int marks[3];

			void getdata()
				{
					cout<<"Enter Student Roll Number : ";
					cin>>rn;
					cout<<"Enter Student Marks for Three Subjects : ";
					for(int i=0;i<3;i++)
					{
						cin>>marks[i];
					}
				}
	};

class calculation : public accept
	{
		public :
			int sum=0;
			void cal()
				{
					for(int i=0;i<3;i++)
					{
						sum=sum+marks[i];
					}
				}
	};

class print : public calculation
	{
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
		p.cal();
		p.show();
		getch();
		return 0;
	}
