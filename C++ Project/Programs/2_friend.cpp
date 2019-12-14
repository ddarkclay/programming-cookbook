#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private : int a;
	public :
		void setdata(int num)
			{
				a=num;
			}
	friend void square_cube(complex s);
};

void square_cube(complex s)
	{
			cout<<"\nSquare of "<<s.a<<" is "<<s.a*s.a<<endl;
			cout<<"Cube of "<<s.a<<" is "<<s.a*s.a*s.a;
	}

int main()
{
	int n1;
	cout<<"Enter a Number : ";
	cin>>n1;
	complex c;
	c.setdata(n1);
	square_cube(c);
	getch();
	return 0;
}
