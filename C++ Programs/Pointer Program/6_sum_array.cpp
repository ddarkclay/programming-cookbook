#include<iostream>
#include<conio.h>
using namespace std;
class complex
	{
		private : int arr[5],sum=0;
		public :
			void accept()
			{
				cout<<"Enter Five Numbers : ";
				for(int i=0;i<5;i++)
					{
						cin>>arr[i];
					}
			}
			void addition()
			{
					for(int i=0;i<5;i++)
					{
						sum=sum+arr[i];
					}
			}
			void print()
			{
					cout<<"\n\nSum Of Array Elements are : "<<sum;
			}
	};

int main()
	{
		complex s1;
		complex *ptr=&s1;
		s1.accept();
		ptr->addition();
		ptr->print();
		getch();
		return 0;
	}
