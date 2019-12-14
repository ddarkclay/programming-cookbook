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

class arith_1 : public accept
	{
		public :
			void sum_sub()
				{
					cout<<"\n\nAddition of "<<a<<" and "<<b<<" is "<<a+b;
					cout<<"\nSubtraction of "<<a<<" and "<<b<<" is "<<a-b;
				}
	};

class arith_2 : public arith_1
	{
		public :
			void mul_div_mod()
				{
					cout<<"\nMultiplication of "<<a<<" and "<<b<<" is "<<a*b;
					cout<<"\nDivision of "<<a<<" and "<<b<<" is "<<a/b;
					cout<<"\nModulus of "<<a<<" and "<<b<<" is "<<a%b;
				}
	};


int main()
	{
		arith_2 a;
		a.getdata();
		a.sum_sub();
		a.mul_div_mod();
		getch();
		return 0;
	}
