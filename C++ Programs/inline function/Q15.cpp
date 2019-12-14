#include<iostream>
#include<conio.h>
using namespace std;

inline void square_cube(int y)
	{
			if(y%100==0 && y%100==0 || y%4==0 && y% 100!=0)
				cout<<endl<<y<<" is Leap Year";
			else
				cout<<endl<<y<<" is Not Leap Year";
	}

int main()
{
    int year;
    cout<<"Enter a Year : ";
    cin>>year;
	square_cube(year);
	getch();
	return 0;
}
