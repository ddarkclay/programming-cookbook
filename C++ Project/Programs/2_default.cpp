#include<iostream>
#include<conio.h>
using namespace std;
void check_even_odd(int num1,int number=50);
int main()
{
	int num1;
	cout<<"Enter a Number : ";
	cin>>num1;
	check_even_odd(num1);
	getch();
	return 0;
}

void check_even_odd(int n1,int n)
{
		cout<<endl<<endl;
		for(int i=0;i<=n;i++)
			{
					cout<<"#";
			}
		if(n1%2==0)
				{
						cout<<endl<<endl<<n1<<" is Even Number";
				}
			else
				{
						cout<<endl<<endl<<n1<<" is Odd Number";
				}
		cout<<endl<<endl;
		for(int i=0;i<=n;i++)
			{
					cout<<"#";
			}
}
