#include<iostream>
#include<conio.h>
using namespace std;
class accept
	{
		public : int a,b;

			void getdata()
				{
					cout<<"Enter First Number : ";
					cin>>a;
					cout<<"Enter Second Number : ";
					cin>>b;
				}
	};

class addition : public accept
	{
		public :
			int sum()
				{
					return(a+b);
				}
			int multi()
				{
					return(a*b);
				}
	};

class subtraction : public accept
	{
		public :
			int sub()
				{
					return(a-b);
				}
	};

class multiplication : public accept
	{
		public :
			void finally()
				{
                    getdata();
					cout<<"\n\nAddition of "<<a<<" and "<<b<<" is "<<a+b;
					cout<<"\nSubtraction of "<<a<<" and "<<b<<" is "<<a-b;
					cout<<"\nMultiplication of "<<a<<" and "<<b<<" is "<<a*b;
				}
	};


int main()
	{
		multiplication m;
		m.finally();
		getch();
		return 0;
	}
