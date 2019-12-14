#include<iostream>
#include<conio.h>
using namespace std;
class check
{
	private : int a,b;
	public :
		void setdata(int num1,int num2)
			{
				a=num1;
				b=num2;
			}
	friend void check_odd_even(check s);
	friend void large(check s);
};

void check_odd_even(check s)
		{
			if(s.a%2==0)
				cout<<endl<<s.a<<" is Even Number";
			else
				cout<<endl<<s.a<<" is Odd Number";
			if(s.b%2==0)
				cout<<endl<<s.b<<" is Even Number";
			else
				cout<<endl<<s.b<<" is Odd Number";
		}

void large(check s)
	{
			if(s.a>s.b)
				cout<<s.a<<" is Greater than "<<s.b;
			else
				cout<<s.b<<" is Greater than "<<s.a;
	}

int main()
{
	int n1,n2;
	cout<<"Enter First Number : ";
	cin>>n1;
	cout<<"Enter Second Number : ";
	cin>>n2;
	check c;
	c.setdata(n1,n2);
	check_odd_even(c);
	cout<<endl<<endl;
	large(c);
	getch();
	return 0;
}
