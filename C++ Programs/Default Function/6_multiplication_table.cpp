#include<iostream>
#include<conio.h>
using namespace std;
void table(int t,int number=15);
int main()
{
	int num;
	cout<<"Enter a Number : ";
	cin>>num;
	table(num);

	getch();
	return 0;
}

void table(int t,int n)
{

		cout<<endl<<endl;;
		for(int i=1;i<=n;i++)
			{
					cout<<"*";
			}
		cout<<endl<<endl;
		cout<<"Multiplication table of "<<t<<" is : \n\n";
		int m=1;
		for(int i=1;i<=10;i++)
				{
					m=t*i;
					cout<<m<<endl;
				}


		cout<<endl<<endl;
		for(int i=0;i<=n;i++)
			{
					cout<<"*";
			}


}
