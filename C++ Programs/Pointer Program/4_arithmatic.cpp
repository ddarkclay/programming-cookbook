#include<iostream>
#include<conio.h>
using namespace std;
class complex
	{
		private : int a,b;
		public :
			void set(int x,int y)
			{
					this->a=x;
					this->b=y;
			}
			void print()
			{
					cout<<"\n\nAddition of "<<a<<" And "<<b<<" is : "<<a+b;
					cout<<"\nSubtraction of "<<a<<" And "<<b<<" is : "<<a-b;
					cout<<"\nMultiplication of "<<a<<" And "<<b<<" is : "<<a*b;
			}
	};

int main()
	{
		complex s1;
		int n1,n2;
		cout<<"Enter First Number : ";
		cin>>n1;
		cout<<"Enter Second Number :";
		cin>>n2;
		s1.set(n1,n2);
		s1.print();
		getch();
		return 0;
	}
