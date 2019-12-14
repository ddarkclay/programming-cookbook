#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	public :
		void function(int a)
			{
				int sum = 0,num,r;
				num=a;
				while(a>0)
				{
					r = a % 10 ;
				  sum = sum + (r * r *r);
				   a = a/10;
				}

				if(num == sum)
					cout<<"\n"<<num<<" is an Armstrong number";
				else
					cout<<"\n"<<num<<" is not an Armstrong number";
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
