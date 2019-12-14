#include<iostream>
#include<conio.h>
using namespace std;
class check
{
	public :
		void function(int a,int b)
			{
				cout<<"\n\nMultiplication of "<<a<<" And "<<b<<" are : "<<a*b;
			}
		void function(int a)
			{
					cout<<"Square of "<<a<<" is "<<a*a;
			}
};


int main()
{
	int n1,n2;
	cout<<"Enter First Number : ";
	cin>>n1;
	cout<<"Enter Second Number : ";
	cin>>n2;
	check c;
	c.function(n1,n2);
	cout<<endl<<endl;
	c.function(n1);
	getch();
	return 0;
}
