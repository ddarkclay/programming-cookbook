#include<iostream>
#include<conio.h>
using namespace std;
void area(int num1,int number=40);
int main()
{
	int radius;
	cout<<"Enter a radius : ";
	cin>>radius;
	area(radius);
	getch();
	return 0;
}

void area(int r,int n)
{
		cout<<endl<<endl;;
		for(int i=0;i<=n;i++)
			{
					cout<<"%";
			}
		cout<<endl<<endl;
		cout<<"Area of Circle is : "<<3.14*r*r;

		cout<<endl<<endl;
		for(int i=0;i<=n;i++)
			{
					cout<<"%";
			}
}
