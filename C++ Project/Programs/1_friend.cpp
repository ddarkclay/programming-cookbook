#include<iostream>
#include<conio.h>
using namespace std;
class arith
{
		private : int n1,n2;
		public :
			void getdata()
				{
					cout<<"Enter First Number : ";
					cin>>n1;
					cout<<"Enter Second Number : ";
					cin>>n2;
				}
		friend void arithmatic(arith &s);
};

void arithmatic(arith &s)
	{
		cout<<"\n\nAddition of "<<s.n1<<" & "<<s.n2<<" is "<<s.n1+s.n2<<endl;
		cout<<"Subtraction of "<<s.n1<<" & "<<s.n2<<" is "<<s.n1-s.n2<<endl;
		cout<<"Multiplication of "<<s.n1<<" & "<<s.n2<<" is "<<s.n1*s.n2<<endl;
		cout<<"Division of "<<s.n1<<" & "<<s.n2<<" is "<<s.n1/s.n2<<endl;
	}

int main()
{
	arith a1;
	a1.getdata();
	arithmatic(a1);
	getch();
	return 0;
}
