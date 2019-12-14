#include<iostream>
#include<conio.h>
using namespace std;
void factorial(int f,int number=25);
int main()
{
	int num;
	cout<<"Enter a Number : ";
	cin>>num;
	factorial(num);

	getch();
	return 0;
}

void factorial(int f,int n)
{
		int fact=1;
		cout<<endl<<endl;;
		for(int i=1;i<=n;i++)
			{
					cout<<"!";
			}
		cout<<endl<<endl;

		for(int i=1;i<=f;i++)
				{
					fact=fact*i;
				}
		cout<<"Factorial of "<<f<<" is "<<fact;

		cout<<endl<<endl;
		for(int i=0;i<=n;i++)
			{
					cout<<"!";
			}


}
