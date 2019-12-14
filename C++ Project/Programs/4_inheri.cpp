#include<iostream>
#include<conio.h>
using namespace std;
class accept
	{
		public : int a,b;

			void getdata()
				{
					cout<<"Enter a Number : ";
					cin>>a;
				}
	};

class square : public accept
	{
		public :
			void sq()
			{
			   cout<<"Square of "<<a<<" is "<<a*a;
			}
	};

class cube : public accept
	{
		public :
			void cu()
			{
			    cout<<"Cube of "<<a<<" is "<<a*a*a;
			}
	};

int main()
	{
        square s;
        cout<<"Square of Number  : \n\n";
        s.getdata();
        s.sq();
		cube c;
        cout<<"\n\nCube of Number  : \n\n";
        c.getdata();
        c.cu();
		getch();
		return 0;
	}
