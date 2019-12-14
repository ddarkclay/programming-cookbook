#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private : int l;
	public :
		void setdata(int num)
			{
				l=num;
			}
	friend void square_cube(complex s);
};

void square_cube(complex s)
	{
			if(s.l%100==0 && s.l%100==0 || s.l%4==0 && s.l% 100!=0)
				{
					cout<<endl<<s.l<<" is Leap Year";
				}
			else
				{
					cout<<endl<<s.l<<" is Not Leap Year";
				}

	}

int main()
{
	int year;
	cout<<"Enter a Year : ";
	cin>>year;
	complex c;
	c.setdata(year);
	square_cube(c);
	getch();
	return 0;
}
