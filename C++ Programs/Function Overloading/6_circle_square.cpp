#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private : int r;
	public :
		void function()
			{
				cout<<"\nEnter Radius Of Circle : ";
				cin>>r;
				cout<<"\nArea of Circle is : "<<3.14*r*r;
			}

			void function(int s)
				{
					cout<<"Area of Square is : "<<s*s;
				}
};


int main()
{
	int side;
	cout<<"Enter Side of Square : ";
	cin>>side;
	complex c;
	cout<<endl;
	c.function(side);
	cout<<endl<<endl;
	c.function();

	getch();
	return 0;
}
