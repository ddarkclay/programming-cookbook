#include<iostream>
#include<conio.h>
using namespace std;
class check
{
	private : int a;
	public :
		void setdata(int num)
			{
				a=num;
			}
	friend void check_odd_even(check s);
};

void check_odd_even(check s)
	{
			if(s.a%2==0)
				{
						cout<<endl<<s.a<<" is Even Number";
				}
			else
				{
						cout<<endl<<s.a<<" is Odd Number";
				}
	}

int main()
{
	int n1;
	cout<<"Enter a Number : ";
	cin>>n1;
	check c;
	c.setdata(n1);
	check_odd_even(c);
	getch();
	return 0;
}
