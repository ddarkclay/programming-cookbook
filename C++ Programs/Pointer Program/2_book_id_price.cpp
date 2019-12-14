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
					cout<<"\n\nBook ID is : "<<a;
					cout<<"\nBook Price is : "<<b;
			}
	};

int main()
	{
		complex s1;
		int id,price;
		cout<<"Enter Book ID : ";
		cin>>id;
		cout<<"Enter Book Price :";
		cin>>price;
		s1.set(id,price);
		s1.print();
		getch();
		return 0;
	}
