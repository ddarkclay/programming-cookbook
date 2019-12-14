#include<iostream>
#include<conio.h>
using namespace std;
class accept_1
	{
		protected : int a;
		public :
				void getdata_1()
					{
						cout<<"Enter First Number : ";
						cin>>a;
					}

	};

class accept_2
	{
		protected : int b;
		public :
				void getdata_2()
					{
						cout<<"Enter Second Number : ";
						cin>>b;
					}
	};

class print : public accept_1,public accept_2
	{
		public :
			void show()
				{
					cout<<"\n\n\nSquare of "<<a<<" is : "<<a*a;
					cout<<"\n\nCube of "<<b<<" is : "<<b*b*b;
				}
	};


int main()
	{
		print p;
		p.getdata_1();
		p.getdata_2();
		p.show();
		getch();
		return 0;
	}
