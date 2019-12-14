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
					cout<<endl<<endl;
					for(int i=0;i<5;i++)
					{
						cout<<"\nSquare of "<<arr[i]<<" is "<<arr[i]*arr[i];
					}
			}
	};

int main()
	{
		complex s1;
		s1.accept();
		s1.addition();
		s1.print();
		getch();
		return 0;
	}
