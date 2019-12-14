#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private : int flag=0;
	public :
		void function(int a)
			{
				for(int i=2;i<a;i++)
				{
					if(a%i==0)
						{
							flag=1;
							break;
						}
				}
				if(flag==1)
					cout<<a<<" is Not Prime Number";
				else
					cout<<a<<" is Prime Number";
			}

			void function(int a,int b)
				{
					cout<<"Subtraction of "<<a<<" And "<<b<<" are "<<a-b;
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
	cout<<endl;
	c.function(n1);
	cout<<endl<<endl;
	c.function(n1,n2);
	getch();
	return 0;
}
