#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	public :
		void function(int a)
			{
				int fact=1;
				for(int i=1;i<=a;i++)
				{
					fact=fact*i;
				}
				cout<<"\n\nFactorial of "<<a<<" is "<<fact;
			}
		void function(int a,int b)
			{
					cout<<"Addition of "<<a<<" And "<<b<<" are "<<a+b;
			}
};


int main()
{
	int n1,n2;
	cout<<"Enter First Number : ";
	cin>>n1;
	cout<<"Enter Second Number : ";
	cin>>n2;
	complex c;
	c.function(n1);
	cout<<endl<<endl;
	c.function(n1,n2);
	getch();
	return 0;
}
