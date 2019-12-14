#include<iostream>
#include<conio.h>
using namespace std;
void arithmatic(int num1,int num2,int number=30);
int main()
{
	int num1,num2;
	cout<<"Enter First Number : ";
	cin>>num1;
	cout<<"Enter Second Number : ";
	cin>>num2;
	arithmatic(num1,num2);
	getch();
	return 0;
}

void arithmatic(int n1,int n2,int n)
{
		cout<<endl<<endl;
		for(int i=0;i<=n;i++)
			{
					cout<<"*";
			}
		cout<<"\n\nAddition of "<<n1<<" & "<<n2<<" is "<<n1+n2<<endl;
		cout<<"Subtraction of "<<n1<<" & "<<n2<<" is "<<n1-n2<<endl;
		cout<<"Multiplication of "<<n1<<" & "<<n2<<" is "<<n1*n2<<endl;
		cout<<"Division of "<<n1<<" & "<<n2<<" is "<<n1/n2<<endl<<endl;
		for(int i=0;i<=n;i++)
			{
					cout<<"*";
			}
}
