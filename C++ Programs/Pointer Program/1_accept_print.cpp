#include<iostream>
#include<conio.h>
using namespace std;
class complex
	{
		private : int a,b;
		public :
			void set(int a,int b)
			{
					this->a=a;
					this->b=b;
			}
			void print()
			{
					cout<<"\n\nFirst Number is : "<<a;
					cout<<"\nSecond Number is : "<<b;
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
