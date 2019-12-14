#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private :
	public :
			void function(char c)
			{
				if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')
					cout<<c<<" is Vowel";
				else
					cout<<c<<" is Consonent";
			}

			void function(int a,int b)
				{
					int temp;
					temp=a;
					a=b;
					b=temp;
					cout<<"\nFirst Number is : "<<a;
					cout<<"\nSecond Number is : "<<b;
				}
};


int main()
{
	char ch;
	int n1,n2;
	cout<<"Enter a Character : ";
	cin>>ch;
	cout<<"Enter First Number : ";
	cin>>n1;
	cout<<"Enter Second Number : ";
	cin>>n2;
	complex c;
	cout<<endl;
	c.function(ch);
	cout<<endl<<endl;
	cout<<"After Swapping Numbers are : ";
	c.function(n1,n2);
	getch();
	return 0;
}
