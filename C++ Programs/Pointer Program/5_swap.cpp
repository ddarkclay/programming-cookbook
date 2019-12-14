#include<iostream>
#include<conio.h>
using namespace std;
class complex
	{
		private : int n1,n2;
		public :
			void accept()
			{
				cout<<"Enter First Number : ";
				cin>>n1;
				cout<<"Enter Second Number :";
				cin>>n2;
			}
			void swap()
			{
					int temp;
					temp=n1;
					n1=n2;
					n2=temp;
			}
			void show()
			{
					cout<<"\n\nFirst Number is : "<<n1;
					cout<<"\nSecond Number is : "<<n2;
			}
	};

int main()
	{
		complex s1;
		complex *ptr=&s1;
		s1.accept();
		cout<<"\n\nAfter Swapping Numbers are : \n";
		ptr->swap();
		ptr->show();
		getch();
		return 0;
	}
