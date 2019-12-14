#include<iostream>
#include<conio.h>
using namespace std;
void square_cube(int num1,int number=20);
int main()
{
	int num1;
	cout<<"Enter a Number : ";
	cin>>num1;
	square_cube(num1);
	getch();
	return 0;
}

void square_cube(int n1,int n)
{
		cout<<endl<<endl;;
		for(int i=0;i<=n;i++)
			{
					cout<<"_";
			}
		cout<<endl<<endl;
		cout<<"Square of "<<n1<<" is "<<n1*n1;
		cout<<"\nCube of "<<n1<<" is "<<n1*n1*n1;
		cout<<endl<<endl;
		for(int i=0;i<=n;i++)
			{
					cout<<"_";
			}
}
