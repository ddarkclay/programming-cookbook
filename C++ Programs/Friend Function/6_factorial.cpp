#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private : int f;
	public :
		void setdata(int num)
			{
				f=num;
			}
	friend int factorial(complex s);
};

int factorial(complex s)
	{
			int fact=1;
			for(int i=1;i<=s.f;i++)
				{
					fact=fact*i;
				}
			return(fact);
	}

int main()
{
	int facto;
	cout<<"Enter a Number : ";
	cin>>facto;
	complex c;
	c.setdata(facto);
	cout<<"\nFactorial of "<<facto<<" is "<<factorial(c);
	getch();
	return 0;
}
