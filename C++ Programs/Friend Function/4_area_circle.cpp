#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private : int r;
	public :
		void setdata(int num)
			{
				r=num;
			}
	friend void square_cube(complex s);
};

void square_cube(complex s)
	{
			cout<<"\nArea of Circle is : "<<3.14*s.r*s.r;
	}

int main()
{
	int radius;
	cout<<"Enter a Radius of Circle : ";
	cin>>radius;
	complex c;
	c.setdata(radius);
	square_cube(c);
	getch();
	return 0;
}
