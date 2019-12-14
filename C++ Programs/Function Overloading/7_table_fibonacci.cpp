#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private : int s=0,i,a=0,b=1,c=0;
	public :
		void function(int n)
			{
				for(i=1;i<=10;i++)
					{
						s=n*i;
						cout<<s<<endl;
					}
			}

			void function()
				{
					for(i=1;i<=10;i++)
						{
								c=a+b;
								cout<<c<<"  ";
								a=b;
								b=c;
						}
				}
};


int main()
{
	int num;
	cout<<"Enter a Number : ";
	cin>>num;
	complex c;
	cout<<endl;
	cout<<"Table of "<<num<<" is : \n\n";
	c.function(num);
	cout<<endl<<endl;
	cout<<"Fibonacci Series of 10 Numbers are : ";
	c.function();

	getch();
	return 0;
}
